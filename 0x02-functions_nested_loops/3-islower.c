/**
 * _islower - determines the case sensitive of given character
 *
 * @c: The character to determine
 *
 * Author: Olalekan js
 * Nick  : .Files
 * Date  : 15-03-2022
 *
 * Return: 1 for lowercase and 0 for UPPERCASE
 *
 */
int _islower(int c)
{
	int ret;

	if (c >= 65 && c <= 90)
	{
		ret = 0;
	}

	if (c >= 97 && c <= 120)
	{
		ret = 1;
	}

	return (ret);
}
