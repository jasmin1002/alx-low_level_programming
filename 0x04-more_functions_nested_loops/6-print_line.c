#include "main.h"
/**
 * print_line - draws a straight line
 * @n: is the number of times _ is drawn
 *
 * Return: void
 */
void print_line(int n)
{
	/* if n > 0, draws _ n times */
	if (n > 0)
	{
		while (n--)
			_putchar(95);
	}

	/* if n = 0 or n < 0, draw '\n'(new line) */
	_putchar('\n');

}
