#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated to a struct dog memember or var
 * @d: struct dog pointer var to free
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;

{
free(d->name);
free(d->owner);
free(d);
}

}
