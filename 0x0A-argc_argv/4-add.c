#include <stdio.h>
#include <stdlib.h>
/**
 * main - ....
 * @argc: argument count
 * @argv: array of pointer arguments
 *
 * Return: 0 for success, 1 for failure
 */
int main(int argc, char **argv)
{
	int i, x, sum = 0;
	char *endptr;

	if (argc == 1)
		printf("0\n");

	else
	{
		for (i = 1; i < argc; i++)
		{
			x = strtol(argv[i], &endptr, 10);

			if (x > 0)
				sum += x;

			else
			{
				printf("Error\n");

				return (1);
			}
		}
		printf("%d\n", sum);

	}


	return (0);
}
