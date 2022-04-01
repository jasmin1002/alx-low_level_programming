#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: formal argument in which it is copied to.
 * @src: formal argument from which data are copied.
 * @n: formal argument for size of data to copy.
 *
 * Return: pointer to dest variable.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	/* Initialize by copying the content of the src to dest */
	while (i < n)
	{
		dest[i] = *(src + i);

		i++;
	}

	/* Return pointer, i.e address of local dest, to the dest variable */
	return (dest);
}
