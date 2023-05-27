#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**

 * _is_zero - determines if any number is zero

 * @num1: first number.

 * @num2: second number.

 *

 * Return: 1 if either number is zero, 0 otherwise.

 */
int _is_zero(char *num1, char *num2)
{
	int i, is_num1 = 1, is_num2 = 1;

	for (i = 0; num1[i] != '\0'; i++)
		if (num1[i] != '0')
		{
			is_num1 = 0;
			break;
		}

	for (i = 0; num2[i] != '\0'; i++)
		if (num2[i] != '0')
		{
			is_num2 = 0;
			break;
		}
	if (is_num1 == 1 || is_num2 == 1)
	{
	printf("0\n");
	exit(0);
	}
return (0);
}

/**

 * multiply_numbers - multiplies two positive numbers.

 * @num1: first number.

 * @num2: second number.

 *

 * Return: Pointer to the product (char array).

 */
char *multiply_numbers(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, product_len = 0;
	int i, j, k, carry = 0;
	char *result;
	char *product;
	int num1_digit;
	int num2_digit;
	int temp;

	while (num1[len1] != '\0')
	{
		len1++;
	}

	while (num2[len2] != '\0')
	{
		len2++;
	}

	if (_is_zero(num1, num2))
	{
		result = malloc(2 * sizeof(char));
		result[0] = '0';
		result[1] = '\0';
		return result;
	}

	product_len = len1 + len2;
	product = malloc((product_len + 1) * sizeof(char));
	if (product == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; i < product_len; i++)
	{
		product[i] = '0';
	}
	product[product_len] = '\0';

	k = product_len - 1;
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		j = len2 - 1;
		while (j >= 0 || carry != 0)
		{
			num1_digit = num1[i] - '0';
			num2_digit = (j >= 0) ? num2[j] - '0' : 0;
			temp = (product[k] - '0') + (num1_digit * num2_digit) + carry;
			product[k] = (temp % 10) + '0';
			carry = temp / 10;
			j--;
			k--;
		}
	}

	return product;
}

int main(int argc, char *argv[])
{
	char *num1;
	char *num2;
	char *result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = argv[1];
	num2 = argv[2];

	result = multiply_numbers(num1, num2);

	printf("%s\n", result);

	free(result);

	return (0);
}
