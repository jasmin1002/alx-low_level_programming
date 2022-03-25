#include <string.h>
#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: input string
 *
 * Return: pointer to string of characters.
 */
char *cap_string(char *s)
{
	/**
	 * i: loop incremental, len: length and el: element
	 */
	int i, len, el;

	char *sp = "\t\n ,;.!?\"(){}";	/* sp: array of word separators */

	i = 0;

	len = strlen(sp);	/* Get the no. of elements in sp */

	while (*(s + i) != '\0')
	{
		/* Always make the beginning of sentence uppercase if lower */
		if (i == 0 && *(s + i) >= 97 && *(s + i) <= 122)
		{
			s[i] = *(s + i) - 32;
		}

		el = 0;
		/* for each string characters, check for any of word sp */
		while (el < len)
		{
			if (*(s + i) == *(sp + el))
			{
				if (*(s + i + 1) >= 97 && *(s + i + 1) <= 122)
					s[i + 1] = *(s + i + 1) - 32;

			}

			el++;
		}

		i++;
	}

	s[strlen(s) + 1] = '\0';

	return (s);
}
