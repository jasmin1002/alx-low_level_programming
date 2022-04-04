#include <unistd.h>
#include "main.h"
/**
 * _putchar - prints character to stdout
 * @c: character to print to screen
 *
 * Return: 1 for success, 0 for failure/error
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
