#include "main.h"
/**
 * print_diagonal - prints diagonal with '\'
 * @n: is the number of times '\' needs to be drawn
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int cnt;
	/* if input number n > 0, then print '\' (back-slash) n time(s) */
	if (n > 0)
	{
		cnt = 1;

		while (cnt <= n) /* Outer loop keeps track of no.line */
		{
			int i = cnt;

			/**
			 * Inner loop prints either "SPACE" or "\"
			 * and or, both depending on the no.line
			 */
			while (i--)
			{
				if (i == 0)
					_putchar(92);

				else
					_putchar(32);

			}
			_putchar('\n');

			cnt++;

		}
	}

	/* else if input number n = 0 or n < 0, then print new line */
	else
		_putchar('\n');


}
