#include <stdio.h>
#include "main.h"

/**
* main - a programm that prints all arguments it receives
* @argc: counts the number of arguments
* @argv: pointer to an array of arguments
* Return: Always 0
*/

int main(int argc, char **argv)
{
int index;

for (index = 0; index < argc; index++)

printf("%s\n", argv[index]);

return (0);
}
