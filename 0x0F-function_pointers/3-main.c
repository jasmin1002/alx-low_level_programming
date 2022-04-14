#include "3-calc.h"

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

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	operand_1 = atoi(argv[1]);
	operand_2 = atoi(argv[3]);
	operator = get_op_func(argv[2]);

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operator(operand_1, operand_2));

	return (0);
}
