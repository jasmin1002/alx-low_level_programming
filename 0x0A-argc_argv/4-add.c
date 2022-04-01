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
	int i, sum = 0;

	if (argc == 1)
		printf("0\n");

	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");

				return (1);
			}

			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}


	return (0);
}
