#### Blue RIOT OS blinking LED

Hardware items:
- Blue pill with STM32F103C8T6
- El cheapo ST-link USB adapter

## Get RIOT OS

Check out the latest version of RIOT OS in the parent directory.

```git clone git://github.com/RIOT-OS/RIOT.git```

## Use RIOT OS
Create a Makefile that identifies the following:
- RIOT OS basedit
- Board type
- ST-LINK version (STLINK_VERSION)
- RSRT value for the onboard reset

## Serial output

Serial output: 
- via: UART2 (PA2: Tx, PA3: Rx)
- settings: 115200 8N1
