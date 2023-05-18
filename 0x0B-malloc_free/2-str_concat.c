#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* str_concat - concatenates two strings
* @s1: pointer to char of inputed string
* @s2: pointer to char of inputed string
* p - character pointer to store the concatenated string
* loops incrementing the s1_counter and s2_counter accordingly
* Return: NULL on failure or pointer on success
*/
char *str_concat(char *s1, char *s2)
{
char *p;
int s1_counter, s2_counter;
/* assigns an empty string "" to the pointer */
if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

s1_counter = 0;
while (s1[s1_counter] != '\0')
s1_counter++;

s2_counter = 0;
while (s2[s2_counter] != '\0')
s2_counter++;
/* accommodate the lengths of s1, s2, and the '\0' in mem */
p = malloc(sizeof(char) * (s1_counter + s2_counter + 1));

if (p == NULL)
return (NULL);

s1_counter = 0;
while (s1[s1_counter] != '\0')
{
/* copy the characters from s1 and s2 into p */
p[s1_counter] = s1[s1_counter];
s1_counter++;
}

s2_counter = 0;
while (s2[s2_counter] != '\0')
{
/* Concatenate s2 to the s1 string into p */
p[s1_counter] = s2[s2_counter];
s1_counter++;
s2_counter++;
}
p[s1_counter] = '\0';
return (p);
}
