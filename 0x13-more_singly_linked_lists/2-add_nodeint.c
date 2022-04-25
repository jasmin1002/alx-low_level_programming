#include "lists.h"

/**
  * add_nodeint - adds a node to the beginning of a list
  * @head: address of the first node
  * @n: data member
  *
  * Return: address of the whole list
  */
listint_t *add_nodeint(listint_t **head, const int n)
{

	if (*head != NULL)
	{
		listint_t *new = malloc(sizeof(listint_t));

		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = *head;

		*head = new;
	}

	else
	{
		*head = malloc(sizeof(listint_t));

		if (*head == NULL)
			return (NULL);

		(*head)->n = n;
		(*head)->next = NULL;
	}

	return (*head);
}
