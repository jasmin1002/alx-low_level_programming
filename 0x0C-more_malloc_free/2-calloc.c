#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of memory space to reserve in bytes
 *
 * Return: void pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mspace;
	int i;
	int amount = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mspace = malloc(amount);

	if (mspace == NULL)
		return (NULL);

	for (i = 0; i < amount; i++)
		mspace[i] = 0;

	return (mspace);
}
