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
	int tmp;
			

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
			tmp = out_c * in_c;

			if (in_c == 0)
			{
				_putchar('0' + tmp);
			}
			
			else if (tmp < 10 && in_c != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + tmp);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tmp / 10 + '0');
				_putchar(tmp % 10 + '0');
			}

			in_c++;
		}
		
		_putchar('\n');

		out_c++;
	}
}
