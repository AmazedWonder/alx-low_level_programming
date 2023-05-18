#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of arguments, pointer
 * Return: Pointer to the new string (Success) or NULL (Error)
 */
char *argstostr(int ac, char **av)
{
int arg_num, arg_char, str_indx, length = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (arg_num = 0; arg_num < ac; arg_num++)
{
for (arg_char = 0; av[arg_num][arg_char] != '\0'; arg_char++)
length++;
length++;
}

str = malloc(sizeof(char) * (length + 1));

if (str == NULL)
return (NULL);

str_indx = 0;

for (arg_num = 0; arg_num < ac; arg_num++)
{
for (arg_char = 0; av[arg_num][arg_char] != '\0'; arg_char++)
{
/* each character of the argument is copied into the str */
str[str_indx] = av[arg_num][arg_char];
str_indx++;
}
str[str_indx] = '\n';/* newlin added to str */
str_indx++;
}

/* contains the concatenated string */
return (str);
}
