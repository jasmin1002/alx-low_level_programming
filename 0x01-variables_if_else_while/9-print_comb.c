#include <stdio.h>

/**
 * main - Entry point
 *
 * Author: Olalekan js
 * Nick  : .Files
 * Date  : 11-03-2022
 *
 * Return: Always 0 (success))
 */
int main(void)
{
	/* dc -decimal*/
	int dc;

	dc = 48;

	/**
	 * iterate over 10x
	 * delimit the digits by:
	 *
	 * comma - 44(ASCII)
	 *
	 * space - 32(ASCII)
	 */
	while (dc <= 57)
	{
		putchar(dc);

		if (dc != 57)
		{
			putchar(44);
			putchar(32);
		}

		dc++;
	}

	putchar('\n');

	return (0);
}
