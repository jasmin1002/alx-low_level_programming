#include "lists.h"

/**
  * get_nodeint_at_index - fetches the nth node of a linked list
  * @head: address of the first node
  * @index: position of a node
  *
  * Return: an element at specific index
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	unsigned int i = 0;
	listint_t *tmp = head;
	listint_t *found = NULL;

	while (tmp)
	{
		tmp = tmp->next;
		count += 1;
	}

	if (index == i)
		found = head;

	else if (index > i && index <= count)
	{
		/* Do some checking */
		while (i < index)
		{
			head = head->next;
			i++;
		}
		found = head;
	}

	else
		return (NULL);

	return (found);
}
