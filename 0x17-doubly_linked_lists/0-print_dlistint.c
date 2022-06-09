#include "lists.h"

/**
  * print_dlistint - prints data in linked node
  * @head: head pointer
  *
  * Return: number of nodes in list
  */
size_t print_dlistint(const dlistint_t *head)
{
	int count = 0;

	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		count += 1;
	}
	return (count);
}
