#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DIGITS 10000

/**
 * multiply - Multiplies two numbers and stores the result in a dynamically allocated string
 * @num1: First number as a string
 * @num2: Second number as a string
 * @Result: Pointer to store the result
 */
void multiply(char *num1, char *num2, char **result) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int result_size = len1 + len2;
    int i, j, carry, digit;

    *result = malloc((result_size + 1) * sizeof(char));

    /* Initialize the result array with '0' */
    for (i = 0; i < result_size; i++) {
        (*result)[i] = '0';
    }
    (*result)[result_size] = '\0';

    /* Perform multiplication */
    for (i = len1 - 1; i >= 0; i--) {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--) {
            digit = (num1[i] - '0') * (num2[j] - '0') + ((*result)[i + j + 1] - '0') + carry;
            carry = digit / 10;
            (*result)[i + j + 1] = (digit % 10) + '0';
        }
        (*result)[i] += carry;
    }
}

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
char *num1, *num2, *result;
int i;
    if (argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return (1);
    }

    num1 = argv[1];
    num2 = argv[2];
    result = NULL;

    multiply(num1, num2, &result);

    /* Remove leading zeros */
    i = 0;
    while (result[i] == '0') {
        i++;
    }

    printf("%s\n", result + i);

    free(result);

    return (0);
}
