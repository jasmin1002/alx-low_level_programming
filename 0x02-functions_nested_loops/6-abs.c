/**
 * _abs - computes the absolute value of an integer.
 *
 * @n: The number to find its absolute value.
 *
 * Author: Olalekan js
 * Nick  : .Files
 * Date  : 15-03-2022
 *
 * Return: +ve value for +ve, -ve and 0 numbers.
 *
 */
int _abs(int n)
{
	/** ret - result, stores appropriate value for each validation **/
	int ret;

	/** when n > 0, i.e +ve, returns n **/
	if (n > 0)
	{
		ret = n;
	}

	/** when n = 0, returns 0 **/
	else if (n == 0)
	{
		ret = n;
	}

	/** when n < 0, i.e -ve, returns -n **/
	else
	{
		ret = -n;
	}

	return (ret);
}
