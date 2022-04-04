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
	/**
	 * i: incremental var
	 * size: stores the length of the given string
	 * str_arr: stores the array of the copy string
	 */
	unsigned int i = 0;
	size_t size = strlen(str);

	/* size is used to know exactly the amount of memory to keep */
	char *str_arr = (char *)malloc(size * sizeof(char) + 1);

	if (*str)
		return (NULL);

	if (str_arr == NULL)
		return ('\0');

	/* Initialize the memory space by copying the given string */
	while (*str != '\0')
	{
		*(str_arr + i) = *(str++);

		i++;
	}

	/* End the copied string with NULL terminating character */
	/**(str_arr + i) = '\0';*/

	return (str_arr);

}
