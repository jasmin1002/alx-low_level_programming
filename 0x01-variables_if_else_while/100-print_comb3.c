#include <stdio.h>

/**
 * main - Entry point
 *
 * Author: Olalekan js
 * Nick  : .Files
 * Date  : 12-03-2022
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int out_c; /*** out_c: out_counter **/
	int in_c;  /*** in_c: inner_counter **/

	out_c = '0';

	/*** OUTER LOOP ***/
	while (out_c <= '9')
	{
		in_c = '0';

		/*** INNER LOOP ***/
		while (in_c <= '9')
		{
			if (in_c != out_c && !(in_c < out_c))
			{
				putchar(out_c);
				putchar(in_c);

				if (out_c != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}

			in_c++;
		}

		out_c++;
	}

	putchar('\n');

	return (0);
}
