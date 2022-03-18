#include "main.h"
/**
 * print_triangle - prints a triangle shape
 * @size: describes the size of triangle to print
 *
 * Return: void
 */
void print_triangle(int size)
{
	int oc, ic; /* oc: outer counter, in: inner counter */

	oc = 1;
	/* if size > 0, print shape */
	if (size > 0)
	{
		while (oc <= size) /* This loop keeps track of lines */
		{
			ic = size;

			while (ic > 0) /* Print the # character */
			{
				/* print # only when ic = oc or ic < oc */
				if (ic <= oc)
					_putchar(35);
				else
					_putchar(32);

				ic--;
			}
			_putchar('\n');

			oc++;
		}
	}

	/* if size = 0 or size < 0, print new line '\n' */
	else
		_putchar('\n');


}
