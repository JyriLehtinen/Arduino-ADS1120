/*
  This example shows how to get single conversions out of the ADS1120.
  Lucas Etchezuri 27/06/2020
*/

#define CS_PIN 2
#define DATA_READY_PIN 4

#include "ADS1120.h"

ADS1120 adc;

void setup() {
  Serial.begin(115200);

  adc.begin(CS_PIN,DATA_READY_PIN);
  
  adc.setGain(1); 
  adc.setDataRate(0x00);  
  adc.setOpMode(0x00);
  adc.setConversionMode(0x00); 
  adc.setMultiplexer(0x00);

}

void loop() {
    long test = adc.readADC_Single();
    Serial.println(test); 
}
