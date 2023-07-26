#include "main.h"
#include <ctype.h>
/**
 * _islower - If it is lowercase
 * @c: Ascii value
 * Return: 1 when lowercase or zero if not
*/
int _islower(int c)
{

	if (islower(c))
		return (1);
	else
		return (0);
}
