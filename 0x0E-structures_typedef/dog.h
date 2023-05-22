#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - A dog with its name, age, and owner
 * @name: Pointer to a character representing the name of the dog
 * @age: Floating-point value representing the age of the dog
 * @owner: Pointer to a character representing the name of the owner of the dog
 * Description: This structure defines a dog with its name, age, and owner
 *		It store information about dogs
 * new_dog - Creates new instance of struct dog and initializes its members
 * Return: Pointer to the newly created struct dog instance,
 * or NULL if memory allocation fails
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dogg;
struct dog *new_dog(char *name, float age, char *owner)
{
struct dog *dog1;

dog1 = malloc(sizeof(struct dog));
if (dog1 == NULL)
return (NULL);
dog1->name = name;
dog1->age = age;
dog1->owner = owner;
return (dog1);

}
#endif /* DOG_H ndef */
