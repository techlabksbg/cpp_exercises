# C++ Exercises on the T-Watch

In order to solve the  exercises, create a new git branch for each exercise,
for instance solution_ex1, solution_ex2 and so on. Don't forget to commit to
these branches.

## Exercise 1: Fizz Buzz (ex1_fizz_buzz)

Output all integers from 1 to 50, but replace 
  * every third by 'fizz'
  * every fifth by 'buzz'
  * every fifteenth by 'fizz buzz'

Sample output:
  1, 2, fizz, 4, buzz, fizz, 7, 8, fizz, buzz, 11, fizz, 13, 14, fizz buzz, 16, 17, fizz, 19, buzz, fizz, 22, ....

## Exercise 2: Array of int (ex2_array)

The function takes one int argument `size`. In the function do the following
  * Allocate an int array of the given size (see https://www.cplusplus.com/doc/tutorial/dynamic/)
  * Fill the array with random values (use the Arduino-function `rand()%100`)
  * Print the array element by element on a single line, separated by commas.
  * Free the memory of the array.

Modify the files main.cpp and exercises.h in order to test exercise 2.

## Exercise 3: class (ex3_class)
The exercise is to write a class, that provides a wrapper for an array of int.
Access and size should be controlled.
  * Implement all missing methods according to the specs given in `ex3_class.h`
  * Call the static function `Ex3_Array::ex3_array()` to test the exercise.  
    Adapt the files main.cpp and exercises.h to accordingly.

