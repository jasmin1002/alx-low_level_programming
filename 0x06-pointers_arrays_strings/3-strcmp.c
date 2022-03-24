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
	/* counter loop: i */
	int i, isbool, ret;

	i = 0;

	/*
	 * use a NULL terminating character as basis of comparison:
	 * at least, one NULL terminating character, from either of
	 * the two inputs needs to be true as condition in other to
	 * compare the input strings.
	 */
	while (*(s1 + i) != '\0' || *(s2 + i) != '\0')
	{
		/* bool: stores either -1, 0, or 1 */
		isbool = *(s1 + i) - *(s2 + i);

		if (isbool < 0) /* if s1 < s2 */
		{
			ret = isbool;
			break;
		}

		else if (isbool == 0) /* s1 == s2 */
		{
			ret = isbool;
			break;
		}

		/* default: s1 > s2, (only when < 0 && == 0) not satisfied.*/
		else if (isbool > 0)
		{
			ret = isbool;
			break;
		}

		i++;
	}

	return (ret);
}
