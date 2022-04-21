#include "lists.h"

/**
 * print_list - prints the number of node in a list
 * @head: head pointer
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)");

		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		cnt++;
	}

	return (cnt);
}
