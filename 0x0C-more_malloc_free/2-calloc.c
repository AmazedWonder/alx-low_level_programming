#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb of size each
 * @nmemb: number of members or elements
 * @size: size of bytes
 * Return: pointer to the allocated memory
 * or NULL if nmemb or size is 0
 * if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int count = 0;

if (nmemb == 0 || size == 0)
return (NULL);

p = malloc(nmemb * size);

if (p == NULL)
return (NULL);

for (; count < (nmemb * size); count++)

p[count] = 0;

return (p);
}
