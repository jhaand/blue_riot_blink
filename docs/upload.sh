#!/bin/bash
# Sure fire way to upload an ELF binary to the Blue Pill board using a
# cheap ST-LINK v2. 
openocd -f /usr/share/openocd/scripts/interface/stlink-v2.cfg \
-c "transport select hla_swd" \
-f /usr/share/openocd/scripts/target/stm32f1x.cfg \
-c "program {{./bin/bluepill/foobar.elf}} verify reset; shutdown;" 
