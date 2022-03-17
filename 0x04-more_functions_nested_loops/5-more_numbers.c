#include "main.h"
/**
 * more_numbers - prints 0 to 14 on different 10 lines
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	i = 1; /* This keeps track of line */

	/* Outer loop */
	while (i <= 10)
	{
		j = 0; /* This prints 0 to 14 */

		while (j <= 14) /* Inner loop */
		{
			if (j >= 10 && j <= 14)
				_putchar('0' + (j / 10));

			if (j <= 14)
				_putchar('0' + (j % 10));

			j++;

		}
		_putchar('\n');
		i++;
	}
}
