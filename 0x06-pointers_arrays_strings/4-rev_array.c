#include "main.h"
/**
 * reverse_array - reverses the order of elements in an array
 * @a: an input array
 * @n: The size of a given input array
 *
 * Return: void (nothing)
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	int len = n - 1;

	i = 0;

	/**
	 * The explanation within the loop is for first iteration and
	 * as such, be repeated for subsequence iterations till half
	 * length or size of the array i.e n / 2)
	 */
	while (i < n / 2)
	{
		/**
		 * Get and store the first element at index zero i.e a[0]
		 * into var tmp
		 */
		tmp = *(a + i);

		/**
		 * Override the value of first element at index 0 i.e a[0]
		 * with value at last index i.e a[sizeof_arr - 1]
		 */
		a[i] = *(a + (len - i));

		/**
		 * Override the value of last element at index sizeof_arr - 1
		 * with value stores in tmp
		 */
		a[len - i] = tmp;

		i++;
	}
}
