#include <string.h>
#include "main.h"
/**
 * leet - encodes an input string into 1337
 * @s: input string placeholder
 *
 * Return: pointer to string of characters.
 */
char *leet(char *s)
{
	int i, j, len;

	/* sch: search_characters */
	char *sch = "aAeEoOtTlL";

	/* codes: encodes or replaces the search character with num */
	char *codes = "4433007711";

	i = 0;

	len = strlen(sch);

	while (*(s + i) != '\0')
	{
		j = 0;

		/**
		 * For each single character in given string,
		 * check if it's same as one of those in sch set.
		 */
		while (j < len)
		{
			/**
			 * If search character is exactly as one of those
			 * in sch set, then swap that character at that index
			 * with character exactly at the same index in codes
			 */
			if (*(s + i) == *(sch + j))
				s[i] = codes[j];

			j++;
		}

		i++;
	}

	return (s);
}
