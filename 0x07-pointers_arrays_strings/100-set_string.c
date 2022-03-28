#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: formal argument for pointer.
 * @to: formal argument for char
 *
 * Return: void (nothing)
 */
void set_string(char **s, char *to)
{
	char **str;

	str = &to;

	*s = *str;
}
