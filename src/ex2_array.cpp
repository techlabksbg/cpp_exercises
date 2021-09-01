#include <Arduino.h>

void ex2_array(int size) {
    // create a dynamic array of ints with the given size, see
    // https://www.cplusplus.com/doc/tutorial/dynamic/
    int* numbers = new int[size];

    // Fill it with random values, you can use the Arduino-Function
    // (rand()%100)
    for (int i=0; i<size; i++) {
        numbers[i] = rand()%100;
    }

    // Print the Array Element by Element
    Serial.print(numbers[0]);
    for (int i=1; i<size; i++) {
        Serial.printf(", %d", numbers[i]);
    }
    Serial.println();

    // free the allocated memory
    delete[] numbers;
}
