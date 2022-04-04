#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two given string
 * @s1: placeholder to copy to
 * @s2: placeholder to copy from
 *
 * Return: character pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	size_t size1, size2;
	char *cat_str;

	/* If passed value is NULL, treat it as string */
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/**
	 * Otherwise, find the size of the string so as to find
	 * the size of allocated memory. Note +1 becos concat string needs
	 * one terminating character in eventually
	 */
	size1 = strlen(s1);
	size2 = strlen(s2) + 1;

	cat_str = (char *)malloc(sizeof(char) * (size1 + size2));

	if (cat_str == NULL)
		return (NULL);

	for (i = 0; *s1 != '\0'; i++)	/* Copy the 1st input */
		cat_str[i] = *(s1++);

	for (; *s2 != '\0'; i++)	/* Then, copy last the 2nd input */
		cat_str[i] = *(s2++);

	cat_str[i] = '\0';

	return (cat_str);
}
