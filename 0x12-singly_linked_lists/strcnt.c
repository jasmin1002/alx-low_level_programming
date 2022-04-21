#include "lists.h"

/**
 * str_len - counts the number of character in a string.
 * @str: given string to count its character
 *
 * Return: number of character in a given string
 */
int str_len(const char *str)
{
	int cnt = 0;

	if (str == NULL)
		return (0);

	while (*(str + i))
	{
		i++;
	}

	return (i);
}
