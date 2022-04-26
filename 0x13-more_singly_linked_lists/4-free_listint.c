#include "lists.h"

/**
  * free_listint - frees a list member
  * @head: address of the first elemet
  *
  * Return: void (nothing)
  */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
