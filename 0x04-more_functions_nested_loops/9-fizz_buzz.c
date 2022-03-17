#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Return: Always 0
 */
void fizz_buzz(void);

int main(void)
{
	fizz_buzz();
	return (0);
}

/**
 * fizz_buzz - prints 1 to 100
 * Return: void
 */
void fizz_buzz(void)
{
	int i = 1;

	while (i <= 100)
	{
		/**
		 * if num is both multiples of 3 and 5 i.e multiple of 15
		 * num % 15 gives 0
		 * print 'FizzBuzz'
		 */
		if (i % 15 == 0)
			printf("FizzBuzz");


		/**
		 * if num is multiple of 5, i.e num % 5 gives 0
		 * print 'Buzz'
		 */
		else if (i % 5 == 0)
			printf("Buzz");


		/**
		 * if num is both multiples of 3
		 * num % 3 gives 0
		 * print 'Fizz'
		 */
		else if (i % 3 == 0)
			printf("Fizz");

		else
			printf("%d", i);


		if (i != 100)
			printf(" ");

		i++;
	}

	printf("\n");
}
