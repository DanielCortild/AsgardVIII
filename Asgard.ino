#include <Wire.h>
#include "TSL2561.h"
#include <SPI.h>
#include <SD.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP280.h>


// TSL Configuration
TSL2561 tsl(TSL2561_ADDR_FLOAT); 

// BMP Configuration
Adafruit_BMP280 bmp;

void setup() {

  Serial.begin(9600);
  
  beg();

}

uint32_t timer =  millis();

void loop() {

  while( millis() - timer < 2000 )
  {
  }

  timer = millis();

  if( !beg()) saveData("Error!!");

  tsl.setGain(TSL2561_GAIN_16X);
  tsl.setTiming(TSL2561_INTEGRATIONTIME_13MS);

  delay(100);

  getTSL();
  getBMP();
   
}
