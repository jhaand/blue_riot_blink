#### Blue RIOT OS blinking LED

Hardware items:
- Blue pill with STM32F103C8T6
- El cheapo ST-link USB adapter
- USB UART with 3v3 voltage levels 

Connect the BluePill board with the ST-Link as follows

| ST-Link | BluePill | Wire Color |
| ------- | ------- | --------|
| 3.3V | 3V3 | Red |
| SWDIO | DIO | Orange |
| SWCLK | DCLK | Brown |
| GND |  GND | Black |

Based on Lup Yuen Lee's article [here](https://medium.com/@ly.lee/connect-the-nb-iot-hardware-stm32-blue-pill-and-quectel-bc95-g-module-978920c964b1).  

Connect the UART to USART 2 
| UART | BluePill | Wire Color |
| ------- | ------- | --------|
| RxD | PA2 (UART2 TX2) | Yellow |
| TxD | PA3 (UART2 RX2) | Blue |
| GND | GND | Black |


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

## Running the program

Compile the program via: `make`

Run it via: `make flash`
Flashing can pose some problems because the RST isn't connected. When you have problems with flashing try the following. Press the reset button on the Bluepill when you issue `make flash` and release it when openocd tries to connect. You only have to do this once per power-cycle of the Bluepill. 

View the output via: `make term`

