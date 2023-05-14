#include <stdio.h>
#include "main.h"

/**
* main - prints the number of arguments passed into it
* @argc: counts the number of arguments
* @argv: arguments or array of arguments
* Return: Always 0
*/

int main(int argc, char **argv __attribute__((unused)))
{

/* (void)argv; does same as __attribute__((unused)) */
/* which excldes compile error of unused argument */

printf("%d\n", argc - 1);

return (0);

}
