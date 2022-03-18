#include "main.h"
/**
 * _isupper - checks if an argument if a uppercase letter
 * @c: variable check
 *
 * Return: Always 1 or 0
 */
int _isupper(int c)
{
	if(c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
