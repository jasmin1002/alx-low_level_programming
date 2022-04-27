#include "lists.h"

/**
  * free_listint2 - frees a node of list
  * @head: address of the first node
  *
  * Return: void (nothing)
  */
void free_listint2(listint_t **head)
{
	listint_t *new_h_node = NULL;
	listint_t *tmp;

	if (head == NULL)
		return;

	else
		new_h_node = (*head)->next;

	while (new_h_node)
	{
		tmp = new_h_node->next;
		free(new_h_node);
		new_h_node = tmp;
	}

	free(*head);
	*head = NULL;
}
