#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: formal argument for memory space like buffer (array)
 * @b: formal argument for constant byte like data type (i.e 0, 3, 'c')
 * @n: formal argument for some size to fill
 *
 * Return: pointer to s, memory space or buffer like array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	/* Use while loop for initialization */
	while (i < n)
	{
		s[i] = b;

		i++;
	}

	/**
	 * Return pointer (i.e variable address) to
	 * the calling function.
	 */
	return (s);
}
