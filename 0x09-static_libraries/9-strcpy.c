#include <string.h>
#include "main.h"

/**
 * _strcpy - copies a string from source to dest
 * @dest: holds a copy of the source
 * @src: holds value to copy
 *
 * Return: pointer to string of char
 */
char *_strcpy(char *dest, char *src)
{
	int j, len;

	/* j - loop counter for copying */
	j = 0;

	/* get the length of input string */
	len = strlen(src);

	/* deep copy: copy from src to dest */
	while (j <= len)
	{
		dest[j] = src[j];
		j++;
	}

	return (dest);
}
