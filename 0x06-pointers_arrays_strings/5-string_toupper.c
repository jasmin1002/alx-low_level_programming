#include "main.h"
#include <string.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: input string to change its character to uppercase.
 *
 * Return: pointer to string.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		/**
		 * If the current element is lowercase,
		 * then change it to uppercase.
		 */
		if (*(s + i) >= 97 && *(s + i) <= 122)
			s[i] = *(s + i) - 32;

		/**
		 * If the current element is not lowercase or any
		 * character other than letters, like numbers and symbols,
		 * then leave it the way it is.
		 */

		i++;
	}

	/* Add NULL terminating character after the whole process */
	s[strlen(s) + 1] = '\0';

	return (s);
}
