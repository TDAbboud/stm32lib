# STM32 Cube Library

> CMSIS and HAL for STM32F4xx microcontrollers

This repository contains a copy of STMicroelectronics STM32Cube Firmware.

## modifications

For all .c and .h files the following processing has been done to the original
files before committing them here:
- lines endings changed to unix style
- trailing spaces removed
- tabs expanded to 4 spaces
- non-ASCII chars converted to their ASCII equivalent

```sh
function clean_code() {
    cat $1 | awk "{sub(/[\t ]*\r/,\"\")}1" | expand -t 4 | tr \\200\\221\\222\\223\\224\\226\\231\\265\\327\\342 \'\'\'\"\"-\'ux\' > tmp$$
    mv tmp$$ $1
}

```
Directories from the original sources are mapped into this repository according
to the following:
``
Drivers/STM32F4xx_HAL_Driver/Inc ->          STM32F4xx_HAL_Driver/Inc
Drivers/STM32F4xx_HAL_Driver/Src ->          STM32F4xx_HAL_Driver/Src
Drivers/CMSIS/Device/ST/STM32F4xx/Include -> CMSIS/STM32F4xx/Include
```
