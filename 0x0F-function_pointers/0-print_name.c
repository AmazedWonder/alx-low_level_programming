#include "function_pointers.h"
#include <stdio.h>
#include <stdio.h>

/**
* print_name - prints a name using pointer to function
* @name: pointer to char of string
* @f: pointer to function that takes a single char * parameter
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
if (f == NULL || name == NULL)
return;

f(name);
}
