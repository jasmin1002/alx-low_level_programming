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
	/**
	 * len: stores the length of a given string
	 * i: loop counter
	 */
	int i, len;

	i = 0;
	len = strlen(dest); /* retrieve the length of dest's input */

	while (*(src + i) != '\0')
	{
		/**
		 * This *src gives src[0] value i.e char*
		 * src + 1 gives address of the next adjacent element
		 * *(src + 1) gives the value stores in such address
		 */


		dest[len + i] = *(src + i);

		/* *dest++ = *(src + i);*/

		i++;
	}

	dest[strlen(dest) + 1] = '\0';

	return (dest);
}
