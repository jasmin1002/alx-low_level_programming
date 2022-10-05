#include "search_algos.h"

/**
 * interpolation_search - searches for target key by interpolation
 * @array: pointer to given array to search
 * @size: length of given array
 * @value: target element search for
 *
 * Return: target's index or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0, h = size - 1, mid = 0;

	if (!array)
		return (-1);

	while (l <= h)
	{
		mid = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));

		if (mid >= size)
		{
			printf("Value checked array[%ld] is out of range\n", mid);
			break;
		}

		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);

		if (array[mid] < value)
			l = mid + 1;
		else if (value < array[mid])
			h = mid - 1;
		else if (array[mid] == value)
			return (mid);
	}

	return (-1);
}
