#include <Arduino.h>
#include "exercises.h"

void setup() {
  Serial.begin(115200);
  sleep(200); // Wait a little while, so all output will be shown

  // Call the exercise
  ex1_fizz_buzz();

}

void loop() {
  Serial.print('.');  // Just print the single character (of type char, in contrast to ".", which is of type char*)
  sleep(2000);
}