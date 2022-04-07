#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum or least in the range
 * @max: maximum or most in the range
 *
 * Return: pointer to array of integers
 */
int *array_range(int min, int max)
{
	int *range;
	int i;

	if (min > max)
		return (NULL);

	range = malloc(sizeof(*range) * (max - min) + sizeof(int));

	if (range == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		range[i] = min + i;

	return (range);
}
