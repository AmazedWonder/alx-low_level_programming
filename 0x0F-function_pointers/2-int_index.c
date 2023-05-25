#include "function_pointers.h"
#include <stdio.h>

/**
* int_index - function that searches for an integer
* returns the index of the first element for which
* the cmp function does not return 0
* @size: size is the number of elements in the array array
* @array: array of elements
* @cmp: cmp is a pointer to the function to be used to compare values
* Return: -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int c;

if (array == NULL || size <= 0 || cmp == NULL)
return (-1);

for (c = 0; c < size; c++)
{
if (cmp(array[c]))
return (c);
}

return (-1);
}
