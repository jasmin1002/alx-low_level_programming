#include "main.h"
#include <stdio.h>
/**
 * print_sum_of_3or5 - prints the sum of multiples of 3 or 5
 *@n: number to compute and print its multiples of 3 or 5
 *
 * Return: void
 */
void print_sum_of_3or5(int n)
{
	if (n >= 3 || n >= 5)
	{
		int sum = 0;

		int inc;

		for(inc = 1; inc < n; inc++)
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
