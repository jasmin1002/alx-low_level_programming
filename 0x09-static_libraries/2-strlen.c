#include <string.h>
#include "main.h"
/**
 * _strlen - evaluates and returns the length of given string
 * @s: input string argument to evaluate
 *
 * Return: length of a string (int type)
 *
 */
int _strlen(char *s)
{
	/**
	 * pointer 'str' is local to this func
	 * it is defined **str, so as to assign pointer of pointer to it
	 */
	char **str;

	/* str - holds reference to 's' address so as to access its content */
	str = &s;

	/* Use C support string function: strlen(input_str) */
	return (strlen(*str));
}
