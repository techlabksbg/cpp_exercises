// So the compiler knowns, what Serial.println is
#include <Arduino.h>

void ex1_fizz_buzz() {
    for (int i=1; i<=50; i++) {
        if (i%15 == 0) {
            Serial.print("fizz buzz, ");
        } else if (i%5==0) {
            Serial.print("buzz, ");
        } else if (i%3==0) {
            Serial.print("fizz, ");
        } else {
            Serial.printf("%d, ",i);
        }
    }
}
