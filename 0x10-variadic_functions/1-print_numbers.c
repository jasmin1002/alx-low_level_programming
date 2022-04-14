#include "variadic_functions.h"

/**
 * print_numbers - numbers
 * @separator: string argument
 * @n: number of arguments (mechanism)
 * ...: varying number of arguments of varying type.
 *
 * Return: void (nothing)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (n > 0)
	{
		if (separator == NULL)
			return;

		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			if (i && i % n)
				printf("%s", separator);

			printf("%d", va_arg(ap, int));
		}
		va_end(ap);
	}
	printf("\n");
}
