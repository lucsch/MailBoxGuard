//
// Created by Lucien Schreiber on 13.10.23.
//
#include "Arduino.h"
#include <SPI.h>

#define PIN_LATCH 3
const int LOOP_NUMBER = 15;
int LOOP_ACTUAL = 0;

void setup(){
    pinMode(PIN_LATCH, OUTPUT);  // LATCH
    digitalWrite(PIN_LATCH, HIGH);
    Serial.begin(1200);  // Pin6 RX Pin7 TX
    analogReference(VDD);
    delay(5);
    Serial.println("Starting...");
}

void loop(){
    delay(1000);
    Serial.println("Working...");
    LOOP_ACTUAL++;

    if (LOOP_ACTUAL >= LOOP_NUMBER){
        digitalWrite(PIN_LATCH, LOW);
        // should stop the MCU...
    }
}
