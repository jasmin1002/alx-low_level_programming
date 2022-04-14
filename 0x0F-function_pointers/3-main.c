#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - combines all codes
 * @argc: argument counts
 * @argv: pointer of pointers
 *
 * Return: int result, exit status code
 */
int main(int argc, char **argv)
{
	int operand_1, operand_2;
	int (*operator)(int, int);

	operand_1 = atoi(argv[1]);
	operator = get_op_func(argv[2]);
	operand_2 = atoi(argv[3]);

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (!operator)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", (operator(operand_1, operand_2)));

	return (0);
}
