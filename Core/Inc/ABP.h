#include "main.h"
#define ABP_ADDR  (0x28 << 1) // Use 8-bit address
#define LSB_slegio 0.0006103515625 // lsb slegio 10/(2^14)=0.0006103515625 

float ABP_READ_DATA(I2C_HandleTypeDef * i2cHandle);
