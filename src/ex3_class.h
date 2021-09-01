class Ex3_Array {

    /**
     * Allocates a new array of this size.
     * Discardes the old one, if it exists
     */
    void setSize(int size);

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
     * Destructor (is called when the object is deleted)
     * frees the memory, if allocated
     */
    ~Ex3_Array();

    private:
    /**
     * Initialized to nullptr (so we know nothing has been allocated)
     */
    int* numbers = nullptr;
};