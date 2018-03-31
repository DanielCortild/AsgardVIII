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

// SD Configuration
int chipSelect = 10;
Sd2Card card;

void setup() {

  Serial.begin(9600);
  
  beg();
  
  tsl.setGain(TSL2561_GAIN_16X);
  tsl.setTiming(TSL2561_INTEGRATIONTIME_13MS);

}

uint32_t timer =  millis();

String data;

void loop() {

  data = "";

  while( millis() - timer < 500 )
  {
  }

  if( !beg()) Serial.println("Error!!");

  getBMP();
  getTSL();

  saveData(data);

  timer = millis();
   
}
