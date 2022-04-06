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

	/* If inputs ac and av are 0 and NULL respectively, return NULL */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* Get the total length of all the arguments altogether */
	for (i = 1; i < ac; i++)
		len += strlen(av[i]);
	
	/* Use the total length of all arguments to make the memory size */
	str = (char *)malloc((sizeof(char) * len) + ac);
	if (str == NULL)	/* If no space available, return NULL */
	{
		free(str);
		return (NULL);
	}

	/* Iterate to initialize and copy to the content of str */
	for (j = 0, i = 1; j < len + ac; i++)
	{
		char *s = av[i];

		for (; *(s + j) != '\0';)
		{
			str[j] = *(s + j);
			j++;
		}
		
		/*if (*s == '\0')*/
		str[j] = '\n';
	}


	return (str);
}
