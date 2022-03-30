#include "main.h"
/**
 * factorial - calculates the product of a given number till it equals 1
 * @n: formal input argument for an input number
 *
 * Return: int
 */
int factorial(int n)
{
	/* If n < 0, return -1 (error) */
	if (n < 0)
		return (-1);

	/* Return 1 as BASE VALUE */
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
