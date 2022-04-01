#include <string.h>
#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: where string is copied to
 * @src : where string is copied from
 * @n   : length of @src
 *
 * Return: new @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/**
	 * if the given n bytes of src is larger than its
	 * content (i.e number of character it contains),
	 * copy those character till NULL terminating character
	 * i.e (i + 1)th position, where i is the number of elements
	 * or characters in the input string for src. +1 extra is the
	 * null terminating character.
	 */
	for (i = 0; i != n && *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);

	}

	/**
	 * for the remaining (n - i + 1) spaces, use NULL terminating
	 * character i.e '\0' to fill those spaces.
	 */
	while (i < n)
	{
		dest[i] = '\0';

		i++;
	}

	return (dest);
}
