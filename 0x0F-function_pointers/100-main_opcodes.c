#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of cl arguments
 * @argv: an array of cl arguments
 *
 * Return: 0 on success, 1 if argc is not the correct one,
 * or 2 if bytes is negative.
 */
int main(int argc, char *argv[])
{
int num_bytes, c = 0;
char *ptr_main_opcode;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

/* convert to int */
num_bytes = atoi(argv[1]);

/* if bytes is negative */
if (num_bytes < 0)
{
printf("Error\n");
exit(2);
}


/* Set pointer to the first byte of the main function */
ptr_main_opcode = (char *)main;

/* loop and print the opcodes */
for (; c < num_bytes; c++)
{
/* Print hexadecimal */
printf("%02hhx", ptr_main_opcode[c]);
/* print a space between bytes, exempt last byte */
if (c != num_bytes - 1)
{
printf(" ");
}
}
printf("\n");

return (0);
}
