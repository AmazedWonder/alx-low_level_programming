#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: argument count
 * @argv: number of arguments
 * Return: success 0 or error 1
 */
int main(int argc, char *argv[])
{
int cents;
int coins;

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);

if (cents < 0)
{
printf("0\n");
return (0);
}

coins = 0;

/* quarters for cents */
coins = coins + cents / 25;
cents %= 25;/* Update cents to the remainder */

/* dimes for cents */
coins = coins + cents / 10;
cents %= 10;

/* nickels for cents */
coins = coins + cents / 5;
cents %= 5;

/* 2-cent for cents */
coins = coins + cents / 2;
cents %= 2;

/* 1-cent for cents */
coins = coins + cents;

printf("%d\n", coins);
return (0);
}
