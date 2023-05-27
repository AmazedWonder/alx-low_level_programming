#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings
 * @separator: The string to be printed between strings/pointer char
 * @n: The number of strings passed to the function/first argument
 * @...: more parameters to be printed
 * Description: prints strings, if separator is NULL,
 *	it is not printed.
 *	If one of the strings if NULL, (nil) is printed instead
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list string_args;
unsigned int c = 0;
char *str;

va_start(string_args, n);

for (; c < n; c++)
{
str = va_arg(string_args, char *);

if (str == NULL)
{
printf("(nil)");
}
else
printf("%s", str);

if (c != (n - 1) && separator != NULL)
{
printf("%s", separator);
}

}

printf("\n");

va_end(string_args);
}
