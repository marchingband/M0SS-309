#!/usr/bin/env bash
set -euo pipefail

# Hard-code these paths before use.
SOURCE_DIR="/Users/andy/circle/app/M0SS-309/sdcard"
TARGET_VOLUME="/Volumes/NO NAME"

VOLUME_NAME="M0SS-309"
EJECT_AFTER_COPY=1
REQUIRE_CONFIRM=1

usage() {
    cat <<EOF
Edit this script first:
  SOURCE_DIR     mounted golden SD, or a folder containing the SD contents
  TARGET_VOLUME  mounted fresh SD volume to overwrite

Current settings:
  SOURCE_DIR=$SOURCE_DIR
  TARGET_VOLUME=$TARGET_VOLUME
  VOLUME_NAME=$VOLUME_NAME

Loop controls:
  y  flash mounted target
  q  quit
EOF
}

die() {
    echo "flash: $*" >&2
    exit 1
}

require_path() {
    local path="$1"
    local label="$2"

    [[ -d "$path" ]] || die "$label does not exist or is not a directory: $path"
}

confirm_target() {
    [[ "$REQUIRE_CONFIRM" == "0" ]] && return

    echo "This will rename and overwrite the mounted volume:"
    echo "  $TARGET_VOLUME"
    echo
    echo "Source:"
    echo "  $SOURCE_DIR"
    echo
    read -r -n 1 -p "Press y to flash, q to quit: " reply
    echo

    case "$reply" in
        y|Y) return ;;
        q|Q) exit 0 ;;
        *) die "cancelled" ;;
    esac
}

rename_target_volume() {
    local old_volume="$1"

    command -v diskutil >/dev/null 2>&1 || die "diskutil not found; this script expects macOS"

    diskutil rename "$old_volume" "$VOLUME_NAME" >/dev/null

    TARGET_VOLUME="/Volumes/$VOLUME_NAME"
    require_path "$TARGET_VOLUME" "renamed target volume"
}

copy_sd_contents() {
    command -v rsync >/dev/null 2>&1 || die "rsync not found"

    rsync -rtv --delete \
        --exclude ".DS_Store" \
        --exclude ".Spotlight-V100" \
        --exclude ".Trashes" \
        --exclude ".fseventsd" \
        "$SOURCE_DIR/" "$TARGET_VOLUME/"

    sync
}

eject_target_volume() {
    [[ "$EJECT_AFTER_COPY" == "0" ]] && return

    diskutil eject "$TARGET_VOLUME" >/dev/null
}

flash_once() {
    TARGET_VOLUME="$1"

    confirm_target

    require_path "$SOURCE_DIR" "source"
    require_path "$TARGET_VOLUME" "target volume"

    case "$TARGET_VOLUME" in
        /Volumes/*) ;;
        *) die "target must be a mounted volume under /Volumes: $TARGET_VOLUME" ;;
    esac

    [[ "$SOURCE_DIR" != "$TARGET_VOLUME" ]] || die "source and target are the same path"

    rename_target_volume "$TARGET_VOLUME"
    copy_sd_contents
    eject_target_volume

    echo "Done. SD card name: $VOLUME_NAME"
}

main() {
    [[ "${1:-}" == "-h" || "${1:-}" == "--help" ]] && { usage; exit 0; }

    local configured_target="$TARGET_VOLUME"

    while true; do
        echo
        echo "Insert/mount a fresh SD card at:"
        echo "  $configured_target"
        echo
        echo "Press q at the prompt to quit."

        flash_once "$configured_target"
    done
}

main "$@"
