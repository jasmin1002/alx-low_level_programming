#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: input string
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	/* Add one only if the character compared is not NULL */
	if (*s != '\0')
	{
		s++;

		return (1 + _strlen_recursion(s));
	}
	else
		return (0);

}
