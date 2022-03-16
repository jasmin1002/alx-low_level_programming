#include "main.h"
/**
 * times_table - prints multiplication table
 *
 * Author: Olalekan js
 * Nick  : .Files
 * Date  : 15-03-2022
 *
 * Return: Always return void (nothing)
 *
 */
void times_table(void)
{
	int out_c; /** out_c: out_counter loop **/
	int in_c;  /** in_c: in_counter loop ***/

	out_c = 0;

	/**
	 * print (or display) 10 by 10 grids. i.e
	 * 10 rows
	 * 10 columns
	 *
	 */

	/** while outer loop **/
	while (out_c <= 9)
	{
		/**Initialize in_c loop variable **/
		in_c = 0;

		while (in_c <= 9)
		{
			if (out_c * in_c <= 9)
			{
				_putchar('0' + (out_c * in_c));
			}
			else
			{
				_putchar('0' + (out_c * in_c) / 10);
				_putchar('0' + (out_c * in_c) % 10);
			}

			if (in_c != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(36);
				_putchar('\n');
			}

			in_c++;
		}

		out_c++;
	}
}
