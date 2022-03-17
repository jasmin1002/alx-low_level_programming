#include "main.h"
/**
 * _isdigit - checks if an input character is a digit. *
 *@c: input argument to validate.
 *
 * Return: 1 for a digit 0 - 9, 0 otherwise.
 *
 */
int _isdigit(int c)
{
	int ret;

	/* if an input is [0-9], return 1 */
	if (c >= 48 && c <= 57)
		ret = 1;

	/* if an input is other than [0 - 9], return 0 */
	else
		ret = 0;

	/* return ret base on the validation */
	return (ret);
}
