#include "main.h"
/**
 * _isdigit - checks if an input is a digit
 * @c: input argument to check
 *
 * Return: 1 for digit, 0 otherwise
 */
int _isdigit(int c)
{
	int ret;

	/* if c = 0 - 9, return 1 */
	if (c >= 48 && c <= 57)
		ret = 1;

	/* otherwise, return 0 */
	else
		ret = 0;


	return (ret);
}
