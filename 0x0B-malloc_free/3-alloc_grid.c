#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width value to determine the number of columns
 *  and allocates memory accordingly
 * @height: height value to determine the number of rows
 * and allocates memory accordingly
 * Return: pointer to 2 dim. array or NULL if fail
 */
int **alloc_grid(int width, int height)
{
int **gr;
int row = 0, col = 0;

if (width <= 0 || height <= 0)
return (NULL);

gr = malloc(sizeof(int *) * height);

if (gr == NULL)
return (NULL);

for (; row < height; row++)
{
gr[row] = malloc(sizeof(int) * width);

if (gr[row] == NULL)
{
for (; row >= 0; row--)
free(gr[row]);
free(gr);
return (NULL);
}
}

for (; row < height; row++)
{
for (; col < width; col++)
gr[row][col] = 0;
}

return (gr);
}
