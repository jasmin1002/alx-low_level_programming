#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: number to extra its last digit.
 *
 * Author: Olalekan js
 * Nick  : .Files
 * Date  : 15-03-2022
 *
 * Return: Always return the value of the last digit.
 *
 */
int print_last_digit(int n)
{
	/** ld - last_digit, stores the value of outcome **/
	int ld;

	/**
	 * when n > 0 or n = 0,
	 * get the last digit and print it.
	 *
	 * formulae: ld = n % 10
	 */
	ld = n % 10;

	if (ld > 0)
	{
		_putchar(ld + 48);
		return (ld);
	}

	/** when n < 0, get the last digit and return it **/
	else
	{
		_putchar(ld + 48);
		return(-ld);
	}
}
