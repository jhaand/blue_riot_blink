## Makefile for blue_riot_blinky
## uses RIOT OS on a Blue Pill board
##

APPLICATION = blue_riot_blinky
BOARD = bluepill
RIOTBASE = $(CURDIR)/../RIOT
QUIET ?= 1

USEMODULE += xtimer

# Programming dependencies
SRST ?= none
#STLINK_VERSION = 2

# Start the normale build process
include $(RIOTBASE)/Makefile.include
