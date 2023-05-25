#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - function executes a function given as a parameter
* on each element of an array
* @array: array of element
* @size: size of array
* @action: function pointer to a function that takes integer arg
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;

if (action == NULL || array == NULL)
return;

for (; i < size; i++)
{
action(array[i]);
}
}
