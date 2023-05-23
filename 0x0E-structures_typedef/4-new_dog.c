#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * _strlen - returns the length of a string
 * @s: string to loop through
 * Return: the length of the string
 */

int _strlen(char *s)
{
int c = 0;

if (s != NULL)
for (; s[c] != '\0'; c++)
;
return (c);
}

/**
 * *_strcpy - duplicates the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointer dest
 * @dest: pointer to the buffer in which we duplicate the string
 * @src: string source
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int len = 0, c = 0;

while (src[len] != '\0')
{
len++;
}

for (; c < len; c++)
{
dest[c] = src[c];
}

dest[c] = '\0';

return (dest);
}


/**
 * new_dog - new dog with the details
 * @name: Pointer to a character name of the dog
 * @age: Floating-point value,age of the dog
 * @owner: Pointer to a char name of the ownerof the dog
 * Return: Pointer to the newly created dog, or NULL if memory allocation fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int length1 = _strlen(name);
int length2 = _strlen(owner);

dog_t *new_dog = malloc(sizeof(dog_t));

if (new_dog == NULL)
return (NULL);

new_dog->name = malloc(sizeof(char) * (length1 + 1));

if (new_dog->name == NULL)
{
free(new_dog);

return (NULL);
}

new_dog->owner = malloc(sizeof(char) * (length2 + 1));

if (new_dog->owner == NULL)
{
free(new_dog);
free(new_dog->name);
return (NULL);
}

_strcpy(new_dog->name, name);

_strcpy(new_dog->owner, owner);

new_dog->age = age;

return (new_dog);
}
