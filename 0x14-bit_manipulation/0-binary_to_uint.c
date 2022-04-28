#include "main.h"

/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: pointer to stream of 0 and 1
  *
  * Return: the converted number, 0 for invalid character or NULL
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 1;
	int bit, j = 0, i = 0;
	int len = strcnt(b);

	printf("string length: %d", len);
	if (b == NULL)
		return (0);

	while (*(b + j) != '\0')
	{
		i = len;
		printf("From here");
		/* Do some checking and conversion */
		if (*(b + j) == '0' || *(b + j) == '1')
		{
			bit = atoi(b + j);

			if (b[j + 1] != '\0')
			{

				while (i--)
				{
					if (bit == 1)
						result *= 2;
					else if (bit == 0)
						continue;
				}
			}
			else
			{
				bit = bit * 1;
				result += bit;
			}

		}
		else
			return (0);

		len--;
		j++;

	}
	return (result);
}


int strcnt(const char *str)
{
	int count = 0;

	if (str == NULL)
		return (0);

	while (*str != '\0')
	{
		count += 1;
		str++;
	}

	return (count);
}
