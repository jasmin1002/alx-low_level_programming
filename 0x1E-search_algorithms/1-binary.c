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
	/**
	 * lB => Lower Boundary
	 * uB => Upper Boundary
	 */
	int m, unsuccessful = -1, lB = 0, uB = size - 1;

	/* Check for nullity of given array */
	if (array == NULL)
		return (unsuccessful);

	/* Otherwise, find the target element in the given search space */
	while (lB <= uB)
	{
		printf("Searching in array: ");
		print_array(array, lB, uB);

		/* Calculate the center of search space structure */
		m = (lB + uB) / 2;

		/**
		 * Divide the search space to half chop
		 * off space likely without target value
		 */
		if (array[m] < value)
			lB = m + 1;
		else if (array[m] > value)
			uB = m - 1;
		else if (array[m] == value)
			return (m);
	}

	return (unsuccessful);
}


/**
 * print_array - print an array
 * @array: given array to print
 * @lB: lower boundary of search space
 * @uB: upper boundary of search space
 *
 * Return: nothing
 */
void print_array(int *array, int lB, int uB)
{

	for (; lB <= uB; lB++)
	{
		if (lB != uB)
			printf("%d, ", array[lB]);
		else
			printf("%d\n", array[lB]);
	}
}
