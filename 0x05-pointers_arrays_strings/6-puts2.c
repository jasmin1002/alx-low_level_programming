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
	/* s: is a pointer of pointer */
	char **s, *iterator;
	int len, i;

	/* s: holds reference to address of memory str */
	s = &str;

	/* Assign value of input string to iterator */
	iterator = *s;

	len = strlen(*s) - 1;

	/* inc by step of 2 */
	for (i = 0; i <= len; i = i + 2)
	{
		_putchar(iterator[i]);
	}

	_putchar('\n');

}
