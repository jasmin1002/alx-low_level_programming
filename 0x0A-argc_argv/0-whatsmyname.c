#include <stdio.h>
#include <stdlib.h>
/**
 * main - ....
 * @argc: argument count
 * @argv: array argument of pointers
 *
 * Return: ...
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	exit(EXIT_SUCCESS);
}
