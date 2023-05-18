#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * previously created by your alloc_grid function
 * @grid: 2d grid
 * @height: height dimension of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
int row = 0;

if (grid == NULL || height <= 0)
return; /* return early */
for (; row < height; row++)
{
free(grid[row]); /* free mem. for each row */
}

free(grid); /* free mem. for the array of pointers */
}
