#include "ex3_class.h"
#include <Arduino.h>

/**
 * Allocates a new array of this size.
 * Discardes the old one, if it exists
 */
void Ex3_Array::setSize(int newsize) {
    if (numbers) {
        delete[] numbers;
    }
    numbers = new int[newsize];
    size = newsize;
}

bool Ex3_Array::put(int index, int value) {
    if (index<0 || index>=size) {
        return false;
    }
    numbers[index] = value;
    return true;
}

int Ex3_Array::get(int index) {
    if (index<0 || index>=size) {
        Serial.printf("Array access outside bounds at %d (maxiumum %d)\n", index, size-1);
        return 0;
    }
    return numbers[index];
}
/**
 * Destructor
 * This function is called, when the object
 * is removed from memory
 */
Ex3_Array::~Ex3_Array() {
    Serial.println("~Ex3_Array()");
    if (numbers) { // same as numbers!=nullptr
        Serial.println("Freeing array memory");
        delete[] numbers;
    }
}

bool Ex3_Array::test() {
    setSize(10);
    if (size!=10) {
        Serial.printf("the 'size' Variable should be 10, but is is %d\n", size);
        return false;
    }
    if (numbers==nullptr) {
        Serial.println("the 'numbers' pointer is still nullptr");
        return false;
    }
    if (!put(2,42)) {
        Serial.println("put(2,42) failed, but should not");
        return false;
    }
    if (get(2)!=42) {
        Serial.printf("get(2) should return 42, but it returns %d\n", get(1));
        return false;
    }
    if (put(10,23)) {
        Serial.println("put(10,23) should fail, but it return true");
        return false;
    }
    if (get(10)!=0) {
        Serial.printf("get(10) should return 0, but it returns %d\n",get(10));
        return false;
    }
    setSize(5);
    if (size!=5) {
        Serial.printf("the 'size' Variable should be 10, but is is %d\n", size);
        return false;
    }
    if (numbers==nullptr) {
        Serial.println("the 'numbers' pointer is still nullptr");
        return false;
    }
    return true;
}