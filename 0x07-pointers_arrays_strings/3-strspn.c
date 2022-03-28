#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: formal argument for input string.
 * @accept: ....
 *
 * Return: unsigned integer.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
		int j = 0;

		while (*(accept + j) != '\0')
		{
			if (*s == *(accept + j))
				i++;

			j++;
		}

		if (*s == ' ')
			break;

		s++;
	}

	return (i);
}
