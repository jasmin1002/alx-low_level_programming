#include "3-calc.h"

/**
 * op_add - sums two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: int sum
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - finds the difference of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: int difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - finds the product of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: int product
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - finds the quotient of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: int quotient
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}


/**
 * op_mod - finds the remainder of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: int remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
