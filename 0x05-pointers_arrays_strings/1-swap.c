#include "main.h"
/**
 * swap_int - exchanges (swaps) the values of any two integers.
 *
 * @a: first input integer argument for alteration
 * @b: second input integer argument for alteration
 *
 * Return: void (nothing)
 */
void swap_int(int *a, int *b)
{
	/* tmp: temporary variable holds one of the values temporarily */
	int tmp;

	/**
	 * To swap, do these steps:
	 *
	 * 1. tmp = *a
	 *
	 * 2. *a = *b
	 *
	 * 3. *b = tmp
	 */

	tmp = *a;

	*a = *b;
	*b = tmp;
}
