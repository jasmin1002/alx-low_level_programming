#include "main.h"
/**
 * _isupper - checks if an input is a UPPERCASE letter
 * @c: character to check for uppercase
 *
 * Return: 1 for uppercase letter, 0 otherwise
 */
int _isupper(int c)
{
	int ret;

	/* if uppercase letter, return 1 */
	if (c >= 65 && c <= 90)
		ret = 1;

	/* otherwise, return 0 */
	else
		ret = 0;

	return (ret);
}
