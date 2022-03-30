#include "main.h"
/**
 * _puts_recursion - prints an input string to the screen
 * @s: formal argument for an input string
 *
 * Return: void (nothing)
 */
void _puts_recursion(char *s)
{
	/**
	 * If input string is NULL character, print newline.
	 * Otherwise, keep printing until NULL terminating occur
	 */
	if (*s != '\0')
	{
		/* Print the character value at this address */
		_putchar(*s);

		/* Increase the address in the pointer by 1-byte */
		s++;

		_puts_recursion(s);	/* Repeat above steps again */
	}
	else
		_putchar('\n');

}
