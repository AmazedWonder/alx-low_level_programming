#include <stdio.h>

/**
 * main - Entry point
 * void - return no value
 * Return: Always 0 successful
*/
int main(void)
{
	int not_exceed = 4000000;
	int sequence = 0;
	int f1 = 1, f2 = 2, f3;

	while (f2 <= not_exceed)
	{
		if (f2 % 2 == 0)
		{
			sequence += f2;
		}
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	printf("%d\n", sequence);
	return (0);
}

