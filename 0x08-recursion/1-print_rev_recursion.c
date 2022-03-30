#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - prints a reverse string to the screen
 * @s: formal argument holds a given input string.
 *
 * Return: void (nothing)
 */
void _print_rev_recursion(char *s)
{

	if (*s == '\0')
		return;

	s++;

	_print_rev_recursion(s);

	s--;

	_putchar(*s);
}
