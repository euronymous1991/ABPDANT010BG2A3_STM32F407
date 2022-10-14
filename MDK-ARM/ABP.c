#include "ABP.h"
#include "main.h"

HAL_StatusTypeDef ret;
uint8_t buf[4]; //duomenu nuskaitymo masyvas
char klaidu_sk;
float slegis; 
short slegis_raw;

float ABP_READ_DATA(I2C_HandleTypeDef * i2cHandle){
    ret = HAL_I2C_Master_Receive( i2cHandle, ABP_ADDR, buf, 4, HAL_MAX_DELAY);
		if (ret != HAL_OK) {
      return 1;
    }
	  slegis_raw = buf[1] + (buf[0] << 8);
    return slegis_raw * LSB_slegio; //paskaiciuojamas slegis
		
	}
