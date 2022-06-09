#include "lists.h"

/**
  * dlistint_len - returns the size of given list
  * @head: pointer to head node
  *
  * Return: number of node in a list
  */
size_t dlistint_len(const dlistint_t *head)
{
	unsigned int size = 0;

	while (head)
	{
		head = head->next;
		size += 1;
	}

	return (size);
}
