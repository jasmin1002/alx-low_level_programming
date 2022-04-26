#include "lists.h"

/**
 * free_list - return memory space to OS
 * @head: address of the list
 *
 * Return: void (nothing)
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
