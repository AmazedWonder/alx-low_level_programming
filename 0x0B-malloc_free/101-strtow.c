#include <stdlib.h>
#include "main.h"

char **strtow(char *str);
/**
 *_word - helper function to count the number of words in a string
 * @s: string to be evaluated
 *
 * Return: number of words
 */
int _word(char *s)
{
	int checkwd = 0, count = 0, word = 0;

	for (; s[count] != '\0'; count++)
	{

		/* check for space */
		if (s[count] == ' ')
			checkwd = 0;/*if space,curr word ends*/

		else if (checkwd == 0)
		{
			checkwd = 1;/* if no space curr word begins*/
			word++;/*count words*/
		}
	}

	return (word);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **ptrHold, *tmp;
	int i = 0, track = 0, len = 0;
	int words, c = 0, begin, end;

	/* calc length of string*/
	for (; *(str + len); len++)

		/* num of words*/
		words = _word(str);

	if (words == 0)

		return (NULL);


	/* alloc mem for array of string(words)*/
	ptrHold = (char **) malloc(sizeof(char *) * (words + 1));

	if (ptrHold == NULL)
		return (NULL);

	/* loop char to know begin and end of each wrd*/
	for (; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;

				/* alloc mem for each word*/
				tmp = (char *) malloc(sizeof(char) * (c + 1));

				if (tmp == NULL)
					return (NULL);

				while (begin < end)
					/* copies char frm str to new mem tmp*/
					*tmp++ = str[begin++];
				*tmp = '\0';/* terminate*/
				/*store pointer to mem ptrHold till extract*/
				ptrHold[track] = tmp - c;
				track++;
				c = 0;
			}
		}

		else if (c++ == 0)
			begin = i;
	}

	ptrHold[track] = NULL;/* end of string*/
	return (ptrHold);

}
