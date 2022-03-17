#include "main.h"
/**
 * _isupper - checks if an input character is a UPPERCASE letter.
 * @c: placeholder for input character.
 *
 * Return: 1 for UPPERCASE letter, 0 otherwise
 *
 */
int _isupper(int c)
{
	int ret;

	/* if an input is uppercase letter, return 0 */
	if (!((c >= 30 && c <= 64) || (c >= 91 && c <= 127)))
		ret = 0;

	/* if an input is other than uppercase letter, return 1 */
	else
		ret = 1;

	/* return ret base on the assignment */
	return (ret);
}
