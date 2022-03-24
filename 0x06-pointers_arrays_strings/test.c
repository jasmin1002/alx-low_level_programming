#include <stdio.h>
#include <string.h>
/*#include "main.h"*/
void _strncat(char *, char *, int);
/*void _strcat(char *, char *);*/
/**
 * main - entry point of program
 *
 * Return: 0 for success
 */
int main(void)
{
	char s1[98] = "hello ";
	char s2[] = "World!\n";
	/*char *ptr;*/

	printf("%s\n", s1);
	printf("%s", s2);
	_strncat(s1, s2, 1);
	printf("%s\n", s1);
	printf("%s", s2);
	_strncat(s1, s2, 1024);
	printf("%s", s1);
	printf("%s", s2);
	/*printf("%s", ptr);

	_strcat(s1, s2);*/

	return (0);
}

void _strcat(char* dest, char* src)
{
	char **s1;

	int len, i, len2;

	len2 = strlen(dest);

	len = strlen(src) + 1;
	i = 0;

	s1 = &dest;

	while (*(src + i) != '\0')
	{
		if (*(src + i) != '\n')
			dest[len2 + i] = *(src + i);

		else
			dest[len2 + i] = '\0';
		/*printf("%d ", dest[0] + len + i);*/

		/*printf("%c ", *(&dest[0] + len + i));*/
		
		i++;
	}
	printf("%s\n", dest);
}

void _strncat(char *dest, char *src, int n)
{
	int size = n / sizeof(src);
	int i = 0;

	while (i < size)
	{
		dest[strlen(dest) + i] = *(src + i);

		i++;
	}

	printf("dest: %s\n", dest);
}
