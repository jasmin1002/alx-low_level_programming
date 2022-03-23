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
	/* len: stores the length of given dest input */
	int len = strlen(dest);

	/* stop iteration only if i = n and NULL Character is reached*/
	while (i != n && *(src + i) != '\0')
	{
		dest[len + i] = *(src + i);


		i++;
	}

	return (dest);
}
