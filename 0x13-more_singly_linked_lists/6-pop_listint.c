#include "lists.h"

/**
  * pop_listint - deletes the head node of a linked list
  * @head: address of the first node
  *
  * Return: head node's data
  */
int pop_listint(listint_t **head)
{
	listint_t *newlist = (*head)->next;
	int data;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	free(*head);

	*head = newlist;
	return (data);
}
