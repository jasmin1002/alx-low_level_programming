#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * @array: array of integers to search
 * @size: length of given array
 * @value: target value
 *
 * Return: index of value (Success) or -1 (Not found)
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0, j = size;

	while (1)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		/* When target is found, goto return*/
		if (array[i] == value)
			break;

		/* Set counter variable to -1 if target is not found*/
		if (i == j - 1)
		{
			i = -1;
			break;
		}

		i += 1;
	}

	return (i);
}
