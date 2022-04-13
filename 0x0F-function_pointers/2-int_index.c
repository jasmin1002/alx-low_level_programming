#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: pointer to array of integer
 * @size: length of the passed array
 * @cmp: callback function pointer
 *
 * Return: index of first matched occurrence in search, -1 no matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index = -1;

	if (cmp != NULL && array != NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(*(array++)))
			{
				index = i;
				break;
			}

			else
				index = -1;
		}
	}
	return (index);
}
