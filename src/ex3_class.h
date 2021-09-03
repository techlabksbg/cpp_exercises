/**
 * author Ivo Blöchliger
 */

#include <Arduino.h>

class Ex3_Array {
public:
    /**
     * Allocates a new array of this size.
     * Discardes the old one, if it exists
     */
    void setSize(int newsize);

    /**
     * returns the element at index or
     * prints an error message and returns 0 if not possible
     */
    int get(int index);

    /**
     * Sets the value at index.
     * Returns true if successful
     */
    bool put(int index, int value);

    /**
     * Tests some of the functionality of this class.
     * @return true if all test where ok
     * otherwise false is returned along with an error message
     */
    bool test();

    /**
     * Destructor (is called when the object is deleted)
     * frees the memory, if allocated
     */
    ~Ex3_Array();

    /**
     * static method, not bound to an instance
     * Call it with Ex3_Array::ex3_class();
     */
    static void ex3_class() {
        Ex3_Array a; // New instance of the Ex3_Array class
        Serial.println("Testing Ex3_Array class:");
        if (a.test()) {
            Serial.println("All tests ok!");
        }
    }

    private:
    /**
     * Initialized to nullptr (so we know nothing has been allocated)
     */
    int* numbers = nullptr;
    // Number of elements
    int size = 0;
};