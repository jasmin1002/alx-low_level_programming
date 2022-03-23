#include <string.h>
#include "main.h"
/**
 * _strncat - joins two strings together
 * @dest: first formal string input
 * @src:  second formal string input
 * @n:    size or length of the src (formal) input
 *
 * Return: concatenated string stores in @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	int len = strlen(dest);

	while (i != n)
	{
		if (i < n)
			dest[len + i] = *(src + i);


		i++;
	}

	return (dest);
}
