#include <stdio.h>

void print_message_before(void) __attribute__ ((constructor));

/**
 * print_message_before  - prints a sentence before the main
 * function is executed
 * or carried out
 */
void print_message_before(void)
{
	printf("You're beat! and yet, you must allow,\n");

	printf("I bore my house upon my back!\n");
}
