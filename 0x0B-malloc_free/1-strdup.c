#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - that returns a pointer to a newly allocated space in memory
* which contains a copy of the string given as a parameter
* @str: pointer to a character array to be duplicated
* Return: On success returns a pointer to the duplicated string
* or NULL if insufficient memory was available
*/
char *_strdup(char *str)
{

/* used to store the address of the dynamically */
/* allocated duplicate array */
char *p;
int lengthCount = 0, dupCount = 0;

if (str == NULL)
return (NULL);

for (; str[lengthCount] != '\0'; lengthCount++)
;

/* dynamically allocates memory for the duplicate array */
/* lengthCount + 1 accounts for null terminator in duplicate array */
p = malloc(sizeof(char) * (lengthCount + 1));

if (p == NULL)/* if memory allocation fail */
return (NULL);

/* loops through char of str */
/* copying all characters from str to p */
for (; str[dupCount]; dupCount++)
p[dupCount] = str[dupCount];

return (p);
}
