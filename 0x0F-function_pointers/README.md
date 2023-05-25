0x0F. C - Function pointers

The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called function_pointers.h

Write a function that prints a name.

Prototype: void print_name(char *name, void (*f)(char *));

Write a function that executes a function given as a parameter on each element of an array.

Prototype: void array_iterator(int *array, size_t size, void (*action)(int));

Write a function that searches for an integer.

Prototype: int int_index(int *array, int size, int (*cmp)(int));

Write a program that performs simple operations.


