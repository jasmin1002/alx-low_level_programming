#include <string.h>
#include "main.h"
/**
 * _strcat - addons second input to first input
 * @dest: first input to add onto
 * @src: second input to add
 *
 * Return: concatenated strings of type (array of strings character)
 */
char *_strcat(char *dest, char *src)
{
	int i, len;

	i = 0;
	len = strlen(dest);

	while (*(src + i) != '\0')
	{
		dest[len + i] = *(src + i);

		i++;
	}

	return (dest);
}
