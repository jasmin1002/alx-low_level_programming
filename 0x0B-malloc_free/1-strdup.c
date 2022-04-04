#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - stores the copy of a given string
 * @str: a given string
 *
 * Return: character pointer
 */
char *_strdup(char *str)
{
	int i;
	size_t size;
	char *str_arr;

	if (str == NULL)
		return (NULL);

	i = 0;
	size = strlen(str);

	/* size is used to know exactly the amount of memory to keep */
	str_arr = (char *)malloc(size * sizeof(char) + 1);

	if (str_arr == NULL)
		return ('\0');

	/* Initialize the memory space by copying the given string */
	while (*str != '\0')
	{
		*(str_arr + i) = *(str++);

		i++;
	}

	/* End the copied string with NULL terminating character */
	*(str_arr + i) = '\0';


	return (str_arr);

}
