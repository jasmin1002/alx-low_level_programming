#include "main.h"
/**
 * _strchr - searches for a character in a string.
 * @s: formal argument for input string.
 * @c: character to look for in a string.
 *
 * Return: pointer to character or NULL
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0' || !(*s != c))
	{
		if (*s == c)
			return (s);

		s++;
	}

	return ('\0');
}
