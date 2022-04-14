#include "variadic_functions.h"

/**
 * sum_them_all - finds the sum of all of inputs arguments
 * @n: count (mechanism for no. of arguments)
 * ...: varying no of inputs of varying type
 *
 * Return: int value
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
		result += va_arg(ap, int);

	va_end(ap);

	return (result);
}
