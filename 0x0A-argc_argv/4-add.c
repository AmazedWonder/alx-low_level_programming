#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: counts the number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int i, num, sum = 0;
char *non_digitSymbol;

if (argc < 2)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
/* strtol() function converts a string representation */
/* of a number to its integer equivalent */
num = strtol(argv[i], &non_digitSymbol, 10);

/* If an argument is not a valid integer */
/* or is less than or equal to 0 */
if (*non_digitSymbol || num < 0)
{
printf("Error\n");
return (1);
}
/* If the argument is a valid positive integer */
sum += num;
}

printf("%d\n", sum);
return (0);
}
