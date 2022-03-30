#include "main.h"
/**
 * _puts_recursion - prints an input string to the screen
 * @s: formal argument for an input string
 *
 * Return: void (nothing)
 */
void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		
		_putchar(*s);

		s++;

		_puts_recursion(s);
	}
	else
		_putchar('\n');

}
