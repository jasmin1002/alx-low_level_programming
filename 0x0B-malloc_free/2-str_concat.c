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

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size1 = strlen(s1) + 1;
	size2 = strlen(s2) + 1;

	cat_str = (char *)malloc(sizeof(char) * (size1 + size2));

	if (cat_str == NULL)
		return (NULL);

	for (i = 0; *s1 != '\0'; i++)
		cat_str[i] = *(s1++);

	for (; *s2 != '\0'; i++)
		cat_str[i] = *(s2++);

	cat_str[i] = '\0';

	return (cat_str);
}
