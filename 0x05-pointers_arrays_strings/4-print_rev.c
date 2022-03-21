#include <string.h>
#include "main.h"
/**
 * print_rev - reverses and prints the given string.
 * @s: input string
 *
 * Return: void (nothing);
 */
void print_rev(char *s)
{
	/** str: local variable and is pointer of pointer */
	char **str, *iterator;

	int len;

	/* str - holds reference to address of the memory pointer s */
	str = &s;

	len = strlen(*str);

	iterator = *str;

	while (len--)
	{
		_putchar(iterator[len]);
	}

	_putchar('\n');
}
