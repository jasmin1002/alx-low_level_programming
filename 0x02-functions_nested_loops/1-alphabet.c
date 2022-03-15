int _putchar(char);
/**
 * print_alphabet - print alphabet stdout
 *
 * Author: Olalekan js
 * Nick  : .Files
 * Date  : 15-03-2022
 *
 * Return: void
 *
 */

void print_alphabet(void)
{
	char c;

	/** Assign 'a' 97 (ASCII) */
	c = 97;

	while (c <= 122)
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}

