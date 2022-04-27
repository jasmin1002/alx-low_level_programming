#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: address of the first node
  * @idx: position
  * @n: data to fill in
  *
  * Return: address of a node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head;
	listint_t *before, *after, *new;
	size_t count = 0;
	size_t i = 0;

	while (tmp)
	{
		tmp = tmp->next;
		count += 1;
	}
		
	before = *head;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == i)
	{
		new->next = *head;
		*head = new;
	}
	else if (idx > i && idx <= count)

		while (i < idx)
		{
			before = before->next;
			tmp = before;
			i++;
		}
		after = before->next;

		tmp->next = new;
		new->next = after;
	}
	else
		return (NULL);

	/**head = new;*/

	return (*head);
}
