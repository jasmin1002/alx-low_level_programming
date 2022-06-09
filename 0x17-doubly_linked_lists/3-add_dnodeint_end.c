#include "lists.h"

/**
 * add_dnodeint_end - join new node to the end of list
 * @head: reference to the first node
 * @n: integer data
 *
 * Return: address of the whole list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *tail = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
		tail = new_node;
	}
	else
	{
		while (tail->next)
			tail = tail->next;

		new_node->next = tail->next;
		tail->next = new_node;
		new_node->prev = tail;
		tail = new_node;
	}
	return (new_node);
}
