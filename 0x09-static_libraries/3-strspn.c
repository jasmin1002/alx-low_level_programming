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

	/**
	 * Iterate ONLY through the first part/chunk of a given string
	 * SPACE serves as delimiter
	 */
	while (*s != '\0')
	{
		int j = 0;

		/**
		 * For each character of given string, check if it has
		 * any of the character(s) in accept variable
		 * If there is, increment i by 1 for every of occurrence
		 * character in accept that matches character in s
		 */
		while (*(accept + j) != '\0')
		{
			if (*s == *(accept + j))
				i++;

			j++;
		}

		/* If there is SPACE delimiter, break out of the loop */
		if (*s == ' ')
			break;

		s++;
	}

	return (i);
}
