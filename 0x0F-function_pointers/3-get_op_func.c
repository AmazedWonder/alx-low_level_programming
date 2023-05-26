#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - gets operator fuction that selects the correct function
 * to perform the operation asked by the user
 * @s: The operator passed as argument to the program
 * Return: A pointer to the function that corresponds
 * to the operator given as a parameter
 */

int (*get_op_func(char *s))(int, int)
{
/* List of structs containing valid operators and their functions */
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL},
};

int i = 0;

/* loop through operators until a matching operator is found */
while (ops[i].op != NULL && *(ops[i].op) != *s)
{
i++;
}

/* Return a pointer to func that corresponds if a match is found */
return (ops[i].f);
}
