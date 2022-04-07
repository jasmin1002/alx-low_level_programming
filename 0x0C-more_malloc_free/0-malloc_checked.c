#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory by malloc
 * @b: amount of memory to reserve
 *
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);	/* A process termination signal for failure */

	return (ptr);
}
