#include "lists.h"

/**
 * list_len - prints the number of members (nodes) in a list
 * @head: reference to first node
 *
 * Return: the number of elements in a list
 */
size_t list_len(const list_t *head)
{
	size_t cnt = 0;

	while (head)
	{
		cnt++;
		head = head->next;
	}

	return (cnt);
}
