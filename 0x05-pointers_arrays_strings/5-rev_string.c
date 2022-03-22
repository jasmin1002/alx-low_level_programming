#include <string.h>
#include "main.h"
/**
 * rev_string - reverses a string
 * @s: holds the input string to reverse
 *
 * Return: void (nothing)
 */
void rev_string(char *s)
{
	/**
	 * tmp: temporary var holds value to override at left of array
	 * i: serves as dynamic array indices
	 * len: holds length of array
	 */
	int tmp, i, len;

	len = strlen(s) - 1;

	/**
	 * (len / 2): implies dividing the array into two parts i.e
	 * left and right of the array thereby making swapping of elements
	 * for each sides easy
	 */
	for (i = 0; i <= (len / 2); i++)
	{
		tmp = s[i];

		s[i] = s[len - i]; /* Assign right elements to the left */

		s[len - i] = tmp; /* Assign left elements to the right */
	}

}
