#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @n: number of elements of the array
 * @a: Array of integers
 */
void reverse_array(int *a, int n)
{
	int *beg = a;
	/* swaps their values until they meet in the middle */
	int *end = a + n - 1;
	int temp;

	while (beg < end)
	{
		temp = *beg;
		*beg = *end;
		*end = temp;
		/* to move on to the next pair of elements to swap */
		beg++;
		end--;
	}
}
