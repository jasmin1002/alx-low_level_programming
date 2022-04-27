#include "lists.h"

/**
  * delete_nodeint_at_index - deletes a node at given index of a list.
  * @head: address of the first node
  * @index: position of a given node
  *
  * Return: 1 for success and -1 for failure
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *before, *tmp, *found = *head;
	int success = -1;
	unsigned int count = 0, i = 0;

	if (*head == NULL)
		return (0);

	while (found)
	{
		count += 1;
		found = found->next;
	}

	found = *head;

	if (index == i)
	{
		found = (*head)->next;
		free(*head);
		*head = found;
		success = 1;
	}

	else if (index > i && index <= count)
	{
		while (i < index)
		{
			before = found;
			found = found->next;
			i++;
		}
		tmp = found->next;
		free(found);
		before->next = tmp;

		success = 1;
	}

	return (success);
}
