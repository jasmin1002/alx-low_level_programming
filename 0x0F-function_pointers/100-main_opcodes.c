#include "function_pointers.h"
#include <udis86.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: argument counts
 * @argv: array of pointer to pointer
 *
 * Return: Always 0 for success
 */
int main(int argc, char **argv)
{
	int number;
	ud_t ud_obj;

	if (argc < 2)
	{
		printf("Error\n");
		exit(1);
	}

	number = atoi(argv[1]);

	if (number < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ud_init(&ud_obj);
	ud_set_input_buffer(&ud_obj, argv[1], number);
	ud_set_mode(&ud_obj, 64);
	ud_set_syntax(&ud_obj, UD_SYN_INTEL);

	while (ud_disassemble(&ud_obj))
	{
		printf("\t%s\n", ud_insn_hex(&ud_obj));
	}

	return (0);
}
