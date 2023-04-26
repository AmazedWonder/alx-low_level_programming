#include <stdio.h>
#include <unistd.h>
int _putchar(int c)
{
	return (write(0, &c, 1));
}
