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
if (d == NULL)
return;

/* Print the nil else name */
if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);

/* Print the age*/
if (d->age < 0)
printf("Age: (nil)\n");
else
printf("Age: %f\n", d->age);

/* Print the nil else owner */
if (d->owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);

/* if (d == NULL) */
/* return; */

}
