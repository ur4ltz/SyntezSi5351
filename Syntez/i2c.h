#ifndef I2C_H
#define I2C_H

#include <inttypes.h>

void i2c_init();
void i2c_begin_write(uint8_t addr);
void i2c_begin_read(uint8_t addr);
void i2c_write(uint8_t data);
uint8_t i2c_read();
void i2c_read(uint8_t* data, uint8_t count);
void i2c_end();

#endif
