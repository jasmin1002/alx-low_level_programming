#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 * _puts - prints input string to stdout.
 * @str: stores a string to print to stdout.
 *
 * Return: void (nothing)
 */
void _puts(char *str)
{
	/* str_p: is a pointer of pointer variable */
	char **str_p, *iterator;

	/* parameter for iteration */
	int cnt, len;

	/**
	 * str_p - holds a reference to address of memory str
	 * for accessing the content of str
	 */
	str_p = &str;

	iterator = *str_p;

	/* length of the string */
	len = strlen(*str_p) - 1;

	for (cnt = 0; cnt <= len; cnt++)
	{
		_putchar(iterator[cnt]);
	}

	_putchar('\n');

}
