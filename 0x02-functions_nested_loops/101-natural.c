#include <stdio.h>
void print_sum_of_3or5(int);
/**
 * main - entry point for program
 *
 * Return: 0 (success)
 */

int main(void)
{
	print_sum_of_3or5(1024);

	return (0);
}

/**
 * print_sum_of_3or5 - prints sum of multiple of 3 or 5
 * @n: input argument to compute and print its sum of multiple of 3 or 5
 *
 * Return: void
 *
 */
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

		printf("%d\n", sum);
	}
}
