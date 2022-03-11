#include <stdio.h>

/**
 * main - Entry point
 *
 * Author: Olalekan js
 * Nick  : .Files
 * Date  : 11-03-2022
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int hex;
	int dg;

	hex = 97;
	dg = 48;

	while (dg <= 57)
	{
		putchar(dg);
		dg++;
	}

	while (hex <= 102)
	{
		putchar(hex);
		hex++;
	}

	putchar('\n');


	return (0);
}
