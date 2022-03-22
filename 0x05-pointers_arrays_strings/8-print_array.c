#include <stdio.h>
#include "main.h"

/**
 * print_array - prints members of an array
 * @a: pointer to an array
 * @n: number of members of an array to print
 *
 * Return: void (nothing)
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}

		i++;
	}

	printf("\n");
}

