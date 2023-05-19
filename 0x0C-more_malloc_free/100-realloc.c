#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes, of the new memory block
 * Return: pointer
 * ptr without changes if new_size == old_size
 * NULL if malloc fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

/* If new_size is zero, equivalent to free(ptr) */
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

/* If ptr1 is NULL, equivalent to malloc(new_size) */
if (ptr == NULL)
ptr = malloc(new_size);

/* If new_size is equal to old_size, do nothing and return ptr */
if (new_size == old_size)
return (ptr);


free(ptr);
/* Allocate new memory block with new_size */
ptr = malloc(new_size);

return (ptr);
}
