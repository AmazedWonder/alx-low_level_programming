#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the details of a struct dog
 * @d: Pointer to a struct dog to be printed
 *
 * Description: prints the details of a struct dog,
 *	including the name, age, and owner. If any of the
 *	members are NULL, it prints (nil) instead
 */
void print_dog(struct dog *d)
{
/* Print the name else nil */
if (d->name != NULL)
printf("Name: %s\n", d->name);
else
printf("Name: (nil)\n");

/* Print the age else nil*/
printf("Age: %.1f\n", d->age);

/* Print the owner else nil*/
if (d->owner != NULL)
printf("Owner: %s\n", d->owner);
else
printf("Owner: (nil)\n");

if (d == NULL)
return;
}
