#include "main.h"
/**
 * rot13 - encodes a given string using ROT13 (ROT-13)
 * @s: input string to encrypt.
 *
 * Return: pointer to string of character.
 */
char *rot13(char *s)
{
	int i;

	i = 0;

	/**
	 * Repeat this process of picking a character
	 * and get its 13th partner until no more character
	 * to work on.
	 */
	while (*(s + i) != '\0')
	{

		/**
		 * Pick a character either between (a - z) or (A - Z)
		 * and offset it by 13 to get 13th character next to it.
		 */
		while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] > 'm' && s[i] <= 'z') || (s[i] > 'M' && s[i] <= 'Z'))
			{
				s[i] = *(s + i) - 13;

				break;
			}

			s[i] = *(s + i) + 13;

			break;

		}


		i++;
	}

	return (s);
}
