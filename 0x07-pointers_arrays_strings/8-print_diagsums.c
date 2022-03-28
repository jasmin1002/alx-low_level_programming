#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers.
 * @a: formal argument for array input (2-Dimensional arrays).
 * @size: size of 1-Dimensional array.
 *
 * Return: void (nothing)
 */
void print_diagsums(int *a, int size)
{
	int i, sum_md, sum_ad;

	i = 0;
	sum_md = 0;
	sum_ad = 0;

	while (i < size)
	{
		sum_md += a[(size + 1) * i];

		sum_ad += a[(size - 1) * (i + 1)];

		i++;
	}

	printf("%d, %d\n", sum_md, sum_ad);
}
