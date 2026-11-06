# M0SS-309

## Build firmware

Install Git, Bash, GNU Make, a native C compiler, and Arm GNU Toolchain
13.3.Rel1 (`arm-none-eabi-gcc` / `arm-none-eabi-g++`), with the toolchain on
`PATH`. On macOS, use `gmake` for the commands below and `export MAKE=gmake`
before running `./makeall`.

Clone Circle at the exact revision used by this project, then clone the
firmware into the directory expected by its Makefile:

```sh
git clone https://github.com/rsta2/circle.git
cd circle
git checkout c243194670720c8a13e6a553654b6d26ec7845a0
git clone https://github.com/marchingband/M0SS-309.git app/M0SS-309
git apply app/M0SS-309/dependencies.patch
```

[`dependencies.patch`](dependencies.patch) contains the local Circle header,
library, and addon changes against commit
`c243194670720c8a13e6a553654b6d26ec7845a0` (release 48). Apply it once from the
Circle root. It includes the audio, USB MIDI, encoder, and FatFs changes;
the required addons are bundled with Circle.

Create `Config.mk` in the Circle root:

```make
PREFIX = arm-none-eabi-
AARCH = 32
RASPPI = 3
DEFINE += -DARM_ALLOW_MULTI_CORE
DEFINE += -DNO_SDHOST -DUSE_USB_FIQ -DUSB_MIDI_RETRY_ON_NAK -DUSB_MIDI_EARLY_RESUBMIT -DUSB_NOSPLIT_BULK_IMMEDIATE -DUSB_MIDI_FIQ_COMPLETION
```

Build from the Circle root:

```sh
./makeall
make -C addon/fatfs
make -C addon/SDCard
make -C addon/sensor
make -C addon/WS28XX
make -C app/M0SS-309
```

Copy the resulting `app/M0SS-309/kernel8-32.img` to your M0SS-309 SD card,
replacing `kernel8-32.img`. For a fresh FAT-formatted card, first copy the
contents of this repository's `sdcard/` directory, including `config.txt`.
The generated Faust headers are included; Faust is not required for this build.
