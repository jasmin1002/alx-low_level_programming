#include "main.h"
/**
 * print_chessboard - prints a chessboard
 * @a: 1-dimensional array
 *
 * Return: void (nothing)
 */
void print_chessboard(char (*a)[8])
{
	int j, size, i = 0;

	/* Get the size/length of the array */
	size = sizeof(a);

	/* Maintain a line count */
	while (i < size)
	{
		j = 0;

		/* print all the characters on a line */
		while (j < size)
		{
			_putchar(a[i][j]);

			j++;
		}

		_putchar('\n');

		i++;

	}
}
