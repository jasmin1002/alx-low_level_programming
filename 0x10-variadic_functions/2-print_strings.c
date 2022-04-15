#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: delimiter between words
 * @n: argument counts (mechanism)
 * ...: variable length of arguments
 *
 * Return: void (nothing)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	if (n > 0)
	{

		va_start(ap, n);

		for (i = 0, str = va_arg(ap, char *); i < n; i++, str = va_arg(ap, char *))
		{
			if (i && i % n && separator != NULL)
				printf("%s", separator);

			if (str == NULL)
				printf("(nil)");

			else
				printf("%s", str);
		}
		va_end(ap);
	}

	printf("\n");
}
