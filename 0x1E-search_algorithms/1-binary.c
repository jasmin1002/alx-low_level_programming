#include "search_algos.h"

/**
 * binary_search - search for a value by binary search on sorted array
 * @array: sorted array
 * @size: length of given array
 * @value: target
 *
 * Return: index of target value (SUCCESS) or -1 (FAILURE)
 */
int binary_search(int *array, size_t size, int value)
{
	int m, found = -1, lB = 0, uB = size - 1;

	while (lB <= uB)
	{
		printf("Searching in array: ");
		print_array(array, lB, uB);

		m = (lB + uB) / 2;

		if (array[m] < value)
			lB = m + 1;
		else if (array[m] > value)
			uB = m - 1;
		else
		{
			found = m;
			break;
		}
	}

	return (found);
}


/**
 * print_array - print an array
 * @array: given array to print
 * @size: length of given array
 *
 * Return: nothing
 */
void print_array(int *array, int lB, int uB)
{
	/*int len = uB - lB;*/

	for (; lB < uB + 1; lB++)
	{
		printf("%d", array[lB]);
		if (lB != uB)
			printf(" ,");
	}

	printf("\n");
}
