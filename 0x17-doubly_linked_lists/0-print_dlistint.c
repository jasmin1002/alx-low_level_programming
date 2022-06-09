#include "lists.h"

/**
  * print_dlistint - prints data in linked node
  * @head: head pointer
  *
  * Return: number of nodes in list
  */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count += 1;
	}
	return (count);
}

