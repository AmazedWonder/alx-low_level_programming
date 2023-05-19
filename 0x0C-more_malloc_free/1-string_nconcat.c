#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string of character
 * @s2: string of character
 * @n: amount of bytes
 * Return: pointer to the allocated memory
 * If malloc fails, return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int s1_len = 0, s2_len = 0, conc, c;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (; s1[s1_len] != '\0'; s1_len++)
;

for (; s2[s2_len] != '\0'; s2_len++)
;

if (n > s2_len)
n = s2_len;/* set n to s2_len length */

conc = s1_len + n;

p = malloc(conc + 1);
if (p == NULL)
return (NULL);

for (c = 0; c < conc; c++)
{
if (c < s1_len)
/* copy characters from s1 and s2 to p */
p[c] = s1[c];
else
p[c] = s2[c - s1_len];
}

p[c] = '\0';

return (p);
}
