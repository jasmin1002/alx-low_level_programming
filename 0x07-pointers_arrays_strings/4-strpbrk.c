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
	/* Search through ALL the characters in input string, s */
	while (*s != '\0')
	{
		int i = 0;

		/**
		 * Return a pointer to any character occurrence in
		 * s that exactly matches any of the character in accept
		 */
		while (*(accept + i) != '\0')
		{
			if (*s == *(accept + i))
				return (s);

			i++;
		}

		s++;
	}

	/**
	 * Return NULL otherwise i.e when none of characters in s
	 * exactly matches the one(s) in accept
	 */
	return ('\0');
}
