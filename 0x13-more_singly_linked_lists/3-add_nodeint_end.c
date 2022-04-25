#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a list
  * @head: address of first node
  * @n: data
  *
  * Return: address of new element
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp = *head;

	if (*head == NULL)
	{
		*head = malloc(sizeof(listint_t));

		if (*head == NULL)
			return (NULL);

		(*head)->n = n;
		(*head)->next = NULL;
	}

	else
	{
		listint_t *new = malloc(sizeof(listint_t));

		new->n = n;
		new->next = NULL;

		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}

		tmp->next = new;
	}

	return (*head);
}
