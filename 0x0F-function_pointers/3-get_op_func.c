#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - selects the correct function in the list as per user's input
 * @s: input operator (string)
 *
 * Return: function pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (1)
	{
		/*if ((*s == *(ops + i)->op) == 0)
			return (*(ops + i)->f);*/
		if (strcmp(s, (ops + i)->op) == 0)
			return (*(ops + i)->f);

		i++;
	}

	return (0);
}
