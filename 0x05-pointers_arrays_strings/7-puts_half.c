#include "main.h"
#include <string.h>
/**
 * puts_half - prints half length of given string
 * @str: holds string to half print
 *
 * Return: void (nothing)
 */
void puts_half(char *str)
{
	/* s: defines pointer of pointer */
	char **s, *iterator;

	int len, j, n;

	/* get value of str into s*/
	s = &str;

	iterator = *s;

	/* Get the length of input string */
	len = strlen(*s) - 1;

	n = len / 2;

	if (len != 2 * len)
	{
		for (j = n + 1; j <= len; j++)
		{
			_putchar(iterator[j]);
		}
	}
	else
	{
		for (j = n; j <= len; j++)
		{
			_putchar(iterator[j]);
		}
	}

	_putchar('\n');
}

