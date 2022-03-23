#include <stdio.h>
#include <string.h>
#include "main.h"
void print_passed_value(char *);
/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{

	char* s = "My first string!";
	
	printf("The value of main *s: %c\n", *s);

	print_passed_value(s);	
	return (0);
}

void print_passed_value(char *s)
{
	int len;

	len = strlen(s);

	while (len--)
	{
		_putchar(*(s + len));
	}

	_putchar('\n');

	printf("The value of len: %d\n", len);

}
