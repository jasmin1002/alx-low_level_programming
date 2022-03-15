#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 *
 * @c: The input alphabetic character to check
 *
 * Author: Olalekan js
 * Nick  : .Files
 * Date  : 15-03-2022
 *
 * Return: 1 for alphabetic character, 0 for non-alphabetic character
 *
 */
int _isalpha(int c)
{
	/** ret - for result, stores the value of validation **/
	int ret;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		ret = 1;

	else
		ret = 0;

	return (ret);
}
