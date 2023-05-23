#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - A dog with its name, age, and owner
 * @name: Pointer to a character representing the name of the dog
 * @age: Floating-point value representing the age of the dog
 * @owner: Pointer to a character representing the name of the owner of the dog
 *
 * Description: This structure defines a dog with its name, age, and owner
 *		It store information about dogs
 * Return: Always 0
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *doggy(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H ndef */
