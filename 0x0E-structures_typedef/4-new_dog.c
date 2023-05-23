#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - new dog with the details
 * @name: Pointer to a character name of the dog
 * @age: Floating-point value,age of the dog
 * @owner: Pointer to a char name of the owner of the dog
 * Return: Pointer to the newly created dog, or NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog = malloc(sizeof(dog_t));

if (name == NULL || age < 0 || owner == NULL)
return (NULL);


if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}

if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}

new_dog->name = strdup(name);
new_dog->age = age;
new_dog->owner = strdup(owner);

return (new_dog);
}
