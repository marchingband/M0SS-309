#
# Makefile
#

CIRCLEHOME = ../..

OBJS = $(patsubst %.c, %.o, $(wildcard *.c)) $(patsubst %.cpp, %.o, $(wildcard *.cpp))

LIBS	= $(CIRCLEHOME)/lib/libcircle.a \
		$(CIRCLEHOME)/lib/sched/libsched.a \
		$(CIRCLEHOME)/lib/sound/libsound.a \
		$(CIRCLEHOME)/addon/sensor/libsensor.a \
		$(CIRCLEHOME)/lib/usb/libusb.a \
		$(CIRCLEHOME)/lib/usb/gadget/libusbgadget.a \
		$(CIRCLEHOME)/lib/fs/libfs.a \
		$(CIRCLEHOME)/lib/input/libinput.a \
		$(CIRCLEHOME)/addon/WS28XX/libws28xx.a

include $(CIRCLEHOME)/Rules.mk

-include $(DEPS)