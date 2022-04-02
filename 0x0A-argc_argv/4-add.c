#include <stdio.h>
#include <string.h>
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
	int i;
	unsigned int k, sum = 0;
	char *e;

	if (argc == 1)
		printf("0\n");

	else
	{
		for (i = 1; i < argc; i++)
		{

			e = argv[i];

			for (k = 0; k < strlen(e); k++)
			{
				if (e[k] < 48 || e[k] > 57)
				{
					printf("Error\n");

					return (1);
				}
			}
				sum += atoi(e);
				e++;

		}

		printf("%d\n", sum);
	}


	return (0);
}
