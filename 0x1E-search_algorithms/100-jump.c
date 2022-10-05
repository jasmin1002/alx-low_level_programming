#include "search_algos.h"

/**
 * jump_search - searches for a target value in a sorted array
 * @array: pointer to first element of array
 * @size: length of the given array
 * @value: target value
 *
 * Return: target value's index(Found) or -1 (Not Found)
 */
int jump_search(int *array, size_t size, int value)
{
	int lB, tmp = 0, m = sqrt(size), len = size;

	for (lB = 0; lB <= len; lB = MIN(lB, len))
	{
		if (array[lB] < value)
		{
			printf("Value checked array[%d] = [%d]\n", lB, array[lB]);
			tmp = lB;
			lB += m;
		}
		if (array[lB] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", tmp, lB);
			break;
		}

		if (lB > len)
		{
			printf("Value found between indexes [%d] and [%d]\n", tmp, lB);
			break;
		}
	}

	while (1)
	{
		printf("Value checked array[%d] = [%d]\n", tmp, array[tmp]);

		if (array[tmp] == value)
			break;

		if (tmp == len - 1)
		{
			tmp = -1;
			break;
		}

		tmp += 1;
	}

	return (tmp);
}
