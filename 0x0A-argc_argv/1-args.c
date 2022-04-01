#include <stdio.h>
#include <stdlib.h>
/**
 * main - ....
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 1 on success 0 on failure
 */
int main(int argc, char **argv)
{
	if (argv)
		printf("%d\n", argc - 1);

	exit(EXIT_SUCCESS);
}
