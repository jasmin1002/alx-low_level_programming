#include "main.h"

/**
 * print_most_numbers - print 0 - 9 except 2 and 4
 *
 * Return: void
 *
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		/* if n = 2 or 4, don't print just continue */
		if (n == 50 || n == 52)
			continue;

		/* any number other than 2 or 4, print */
		_putchar(n);
	}

	_putchar('\n');
}
