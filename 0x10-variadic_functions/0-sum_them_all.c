#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all parameters.
 * @n:  first parameter passed to the function.
 * @...: variable number of more parameters/arguments to calculate the sum of.
 *
 * Return: 0
 *	Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
	{
		va_list sum_arg;
		unsigned int i, sum = 0;


		va_start(sum_arg, n);


		for (i = 0; i < n; i++)
			sum += va_arg(sum_arg, int);


		va_end(sum_arg);


		return (sum);
	}
