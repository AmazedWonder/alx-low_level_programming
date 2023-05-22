#include "dog.h"

/**
 * init_dog - Initializes struct dog var with provided values
 *
 * @d: Pointer to a struct dog to be initialized
 * @name: Pointer to a character representing the name of the dog
 * @age: Floating-point value representing the age of the dog
 * @owner: Pointer to a character representing the name of the owner of the dog
 *
 * Description: Takes a pointer to a struct dog var and initializes its members
 *		with the provided values for name, age, and owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
