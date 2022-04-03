#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry of the program
 * @argc: input argument count
 * @argv: array of input arguments
 *
 * Return: 0 for success and 1 on failure
 */
int main(int argc, char *argv[])
{
	int x, cnt = 0;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");

		return (1);
	}

	x = atoi(argv[argc - 1]);

	if (x < 0)
		printf("0\n");

	else
	{
		while (x)
		{
			if (x >= 25)
			{
				x -= 25;

				cnt++;
				continue;
			}

			if (x >= 10)
			{
				x -= 10;

				cnt++;
				continue;
			}

			if (x >= 5)
			{
				x -= 5;

				cnt++;
				continue;
			}

			if (x >= 2)
			{
				x -= 2;

				cnt++;
				continue;
			}

			if (x == 1)
			{
				x -= 1;

				cnt++;
				continue;
			}
		}

		printf("%d\n", cnt);
	}

	return (0);
}
