#include "main.h"
/**
 * print_square - prints a square shape
 * @size: gives size of a square
 *
 * Return: void
 */
void print_square(int size)
{
	int oc, ic; /* oc: outer counter, ic: inner counter */

	oc = 0;

	/* if size > 0, draw a square of size, size */
	if (size > 0)
	{
		while (oc < size) /* Outer loop keeps track of lines */
		{
			ic = 0;

			while (ic < size) /* Inner loop prints the # */
			{
				_putchar(35);
				ic++;
			}

			_putchar('\n');
			oc++;
		}
	}

	/* if size = 0 or size < 0, print a '\n' (new line) */
	else
		_putchar('\n');

}
