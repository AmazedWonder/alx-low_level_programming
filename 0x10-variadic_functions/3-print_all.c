#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
* /pointer to const char
*/
void print_all(const char * const format, ...)
{
	va_list print_args;
	int count = 0;
	char *str;
	char *str_sep = "";

	va_start(print_args, format);
if (format)
	{
	while (format[count])
	{
		switch (format[count])
		{
		case 'c':
			printf("%s%c", str_sep, va_arg(print_args, int));
			break;
		case 'i':
			printf("%s%d", str_sep, va_arg(print_args, int));
			break;
		case 'f':
			printf("%s%f", str_sep, va_arg(print_args, double));
			break;
		case 's':

			str = va_arg(print_args, char *);

		if (!str)
		str = "(nil)";
		printf("%s%s", str_sep, str);
break;
		default:
		count++;
		continue;
		}
str_sep = ", ";
count++;
	}
	}
printf("\n");
va_end(print_args);

}
