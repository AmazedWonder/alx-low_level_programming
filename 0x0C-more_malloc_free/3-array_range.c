#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value of element
 * @max: maximum value of element
 * Return: pointer to the newly created array.
 * NULL if max < min or malloc fails
 */
int *array_range(int min, int max)
{
int *ptr;
int c;

if (min > max)
return (NULL);/* when there's invalid range */

/* allocates memory, calculates number of elements in the range */
ptr = malloc(sizeof(*ptr) * ((max - min) + 1));
if (ptr == NULL)
return (NULL);

/* successfully allocating memory,assign values from min */
c = 0;
while (min <= max)
{
ptr[c] = min;
c++;
min++;
}

return (ptr);
}
