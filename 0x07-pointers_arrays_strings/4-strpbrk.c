#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s:  formal argument for input string.
 * @accept: formal argument for test characters.
 *
 * Return: pointer to character in s
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		int i = 0;

		while (*(accept + i) != '\0')
		{
			if (*s == *(accept + i))
				return (s);

			i++;
		}

		s++;
	}

	return ('\0');
}
