#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - entry of the program
 * @argc: input argument count
 * @argv: array of input arguments
 *
 * Return: 0 for success and 1 on failure
 */
int main(int argc, char *argv[])
{
	int x, cnt = 0;

	int *ptr = &cnt;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");

		return (1);
	}

	x = atoi(argv[argc - 1]);

	if (x < 0)
		printf("0\n");

	else
	{
		break_down(x, ptr);

		printf("%d\n", *ptr);
	}

	return (0);
}
