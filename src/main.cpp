#include <Arduino.h>
#include "exercises.h"

void run_exercise() {
  //ex1_fizz_buzz();
  //ex2_array(30);
  Ex3_Array::ex3_class();
}

void setup() {
  Serial.begin(115200);
  delay(200); // Wait a little while, so all output will be shown

  // Call the exercise
  run_exercise();

}

unsigned long nextMessage=0;

void loop() {
  if (millis()>nextMessage) {
    Serial.printf("[%lu] Type Enter to rerun the exercise\n", millis());
    nextMessage=millis()+5000; // Every 5 seconds
  }
  if (Serial.available()) {  // Do we user input?
    run_exercise();
    delay(2);  // Return might send to characters "\r\n", so wait for the second to arrive...
    while(Serial.available()) {  // Clear all incoming data
      Serial.read();
    }
  }
}
