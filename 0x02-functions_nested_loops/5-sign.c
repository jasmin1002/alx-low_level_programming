/** Declaring _putchar **/
int _putchar(int);

/**
 * print_sign - prints the sign of a number.
 *
 * @n: The sign character to check for.
 *
 * Author: Olalekan js
 * Nick  : .Files
 * Date  : 15-03-2022
 *
 * Return: 1 for >n, 0 for =0 and -1 for <n
 *
 */
int print_sign(int n)
{
	/** ret - for result, stores the value of validation **/
	int ret;

	/** prints + and returns 1 when n > 0 **/
	if (n > 0)
	{
		_putchar('+');
		ret = 1;
	}

	/** prints 0 and returns 0 when n = 0 **/
	else if (n == 0)
	{
		_putchar(48);
		ret = 0;
	}

	/** prints - and returns -1 when n < 0 **/
	else
	{
		_putchar('-');
		ret = -1;
	}

	return (ret);
}
