#include <stdio.h>

/**
 * main - Entry point
 *
 * putchar outputs characters a-z to stdout except 'q' and 'e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		if (!(c == 'e' || c == 'q'))
			putchar(c);

		c++;
	}

	putchar('\n');

	return (0);
}
