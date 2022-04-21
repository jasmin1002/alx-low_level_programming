#include "lists.h"

/**
 * print_list - prints the number of node in a list
 * @head: head pointer
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *head)
{
	size_t cnt = 0;
	/*list_t *tmp = head->next;*/

	while (head)
	{
		if (head->str == NULL)
			printf("[0] (nil)");

		else
			printf("[%d] %s\n", head->len, head->str);

		head = head->next;
		cnt++;
	}

	return (cnt);
}
