#include "lists.h"

/**
  * listint_len - counts the number of elements (members) in a linked list
  * @head: address of first node in a list
  *
  * Return: number of members in a list
  */
size_t listint_len(const listint_t *head)
{
	size_t count = 0;

	while (head)
	{
		head = head->next;
		count += 1;
	}

	return (count);
}
