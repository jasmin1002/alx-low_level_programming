#include "lists.h"

/**
  * sum_listint - sums all data member of a linked list
  * @head: address of the first node
  *
  * Return: sum of n data
  */
int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int sum = 0, count = 0;

	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}

	if (head == NULL)
		return (0);

	while (--count)
	{
		sum += head->n;
		head = head->next;
	}

	sum += head->n;

	return (sum);
}
