#include "main.h"
/**
 * _pow_recursion - calculates the result of a number raised to a power
 * @x: is an integer which is raised by power
 * @y: is an integer power
 *
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	/* Return -1 ONLY if negative power is entered */
	if (y < 0)
		return (-1);

	/* Return 1 as BASE value */
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, --y));
}
