#include <string.h>
#include "main.h"

/**
 * puts2 - prints some character of a string with first character
 * @str: some of its character to print
 *
 * Return: void (nothing)
 */
void puts2(char *str)
{
	char **s, *iterator;
	int len, i;

	s = &str;

	iterator = *s;

	len = strlen(*s) - 1;

	for (i = 0; i <= len; i = i + 2)
	{
		_putchar(iterator[i]);
	}

	_putchar('\n');

}
