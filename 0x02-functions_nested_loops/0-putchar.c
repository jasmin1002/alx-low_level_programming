#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Author: Olalekan js
 * Nick  : .Files
 * Date  : 15-03-2022
 *
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	/** 1 implies "stdout" **/
	write(1, "_putchar\n", 9);

	return (0);
}
