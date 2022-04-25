#include "lists.h"

/**
 * print_listint - prints all elements/members of a list
 * @head: first node address
 *
 * Return: number of elements/members in a list
 */
size_t print_listint(const listint_t *head)
{
	unsigned int count = 0;

	while (head)
	{
		printf("%d\n", head->n);

		head = head->next;
		count++;
	}

	return (count);
}
