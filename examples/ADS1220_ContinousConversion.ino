#include "ADS1120.h"

#define CS_PIN 2
#define DATA_READY_PIN 4

ADS1120 adc;

long adc_reading;

void setup() {
  Serial.begin(115200);
  adc.begin(CS_PIN,DATA_READY_PIN);
  adc.setConversionMode(0x01);
  adc.setDataRate(0x00);
}

void loop() {
  if (adc.isDataReady()){
    adc_reading = adc.readADC();
    Serial.println(adc_reading);
  }
}
