#include "main.h"
/**
 * _strcmp - compares any two input strings
 * @s1: first string to compare
 * @s2: second string to compare with
 *
 * Return: either < 0, == 0, or > 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int isbool = 0;	/* isbool stores difference btw strings */

	/*
	 * use a NULL terminating character as basis of comparison:
	 * at least, one NULL terminating character, from either of
	 * the two inputs needs to be true as condition in other to
	 * compare the input strings.
	 */
	while (*(s1 + i) != '\0' || *(s2 + i) != '\0')
	{
		/**
		 * if each character from each string are the same,
		 * then keep iterating. But if you spot difference
		 * character, record the difference into isbool and
		 * seize or stop iteration at that point.
		 */
		if (*(s1 + i) != *(s2 + i))
		{
			isbool = *(s1 + i) - *(s2 + i);
			break;
		}

		i++;
	}

	/* depending nature (i.e -ve or +ve) of value record from comparison*/
	if (isbool < 0 || isbool > 0)
		return (isbool);
	/* if no difference spot throughout comparison, return 0 */
	else
		return (0);
}
