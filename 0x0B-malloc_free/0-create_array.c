#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: size of memory to allocate dynamically
 * @c: character to initialize with
 *
 * Return: character pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int cnt = 0;
	char *array;

	/* if input size is more than zero, then make array of size bytes */
	if (size > 0)
		array = (char *)malloc(size * sizeof(char));

	/* If size is zero (0), return NULL */
	else
		return (NULL);

	/* If memory size to allocate is large or not possible, return NULL */
	if (array == NULL)
		return ('\0');

	else
	{
		/* Initialize the array only if the memory is allocated */
		while (cnt < size)
		{
			*(array + cnt) = c;

			cnt++;
		}

	}

	return (array);
}
