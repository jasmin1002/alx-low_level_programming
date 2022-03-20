#include <stdio.h>
#include "main.h"
/**
 * main - entry point for program
 *
 * Return: 0 (success)
 */

void print_sum_of_3or5(int);

int main(void)
{
	print_sum_of_3or5(1024);

	return (0);
}

void print_sum_of_3or5(int n)
{
	if (n >= 3 || n >= 5)
	{
		int sum = 0;

		int inc;

		for (inc = 1; inc < n; inc++)
		{
			/**
			 * check if n, at every iteration,
			 * is divisible by 3 or 5
			 */
			if (inc % 3 == 0 || inc % 5 == 0)
				sum = sum + inc;

		}

		printf("Sum equals %d\n", sum);
	}
}
