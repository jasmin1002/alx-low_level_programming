/** Reference _putchar() function **/
int _putchar(char);

/**
 * print_alphabet_x10 - prints a-z 10times
 *
 * Author: Olalekan js
 * Nick  : .Files
 * Date  : 15-03-2022
 *
 * Return - Always void
 *
 */
void print_alphabet_x10(void)
{
	/** lc - Loop counter **/
	int lc;
	char ch;

	lc = 0;

	/** Outer while loop **/
	while (lc < 10)
	{
		/** Assign ch (character variable): 97 (ASCII for a) **/
		ch = 97;

		/** Inner while loop **/
		/** 122 - ASCII for z**/
		while (ch <= 122)
		{
			_putchar(ch);
			ch++;
		}

		_putchar('\n');
		lc++;
	}
}
