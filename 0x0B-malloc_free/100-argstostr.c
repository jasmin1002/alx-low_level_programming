#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: number of input arguments (arguments count)
 * @av: double pointer
 *
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len = 0;
	int indexLen = 0;

	/* If inputs ac and av are 0 and NULL respectively, return NULL */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* Get the total length of all the arguments altogether */
	for (i = 0; i < ac; i++)
		len += strlen(av[i]);

	len = len + ac;

	/* Use the total length of all arguments to make the memory size */
	str = (char *)malloc((sizeof(char) * len) + sizeof(char));
	if (str == NULL)	/* If no space available, return NULL */
	{
		free(str);
		return (NULL);
	}

	/* Iterate to initialize and copy to the content of str */
	for (i = 0; i < ac; i++)
	{
		char *s = av[i];

		for (j = 0; (str[indexLen + j] = *(s++)); j++)
			;

		str[indexLen + j] = '\n';

		indexLen += j + 1;

	}

	str[indexLen + 1] = '\0';


	return (str);
}
