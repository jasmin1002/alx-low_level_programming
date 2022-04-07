#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two given strings
 * @s1: first string
 * @s2: second string
 * @n: length of the second string
 *
 * Return: pointer to new memory with concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *catstrs;
	unsigned int len;
	/*unsigned int len2 = strlen(s2);*/
	unsigned int i, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
		len = strlen(s1) + strlen(s2);
	else
		len = strlen(s1) + n;

	catstrs = malloc(sizeof(char) * len + 1);

	if (catstrs == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		if (i < strlen(s1))
			catstrs[i] = s1[i];

		if (i >= strlen(s1))
		{
			catstrs[i] = s2[j];
			j++;
		}
	}


	catstrs[i] = '\0';

	return (catstrs);
}
