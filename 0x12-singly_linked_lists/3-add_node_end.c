#include "lists.h"

/**
 * add_node_end - join new node to the end of list
 * @head: reference to the first node
 * @str: string data
 *
 * Return: address of the whole list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = *head;
	/* is head == NULL */
	/* Yes */
	if (*head == NULL)
	{
		/* Define a default value here */
		*head = malloc(sizeof(list_t));

		if (*head == NULL)
			return (NULL);

		(*head)->str = strdup(str);
		(*head)->len = str_len(str);
		(*head)->next = NULL;
		tmp = *head;
	}

	else
	{
		/* No */
		list_t *new = malloc(sizeof(list_t));

		if (new == NULL)
			return (NULL);
		/* Add new node to extreme end of list */
		new->str = strdup(str);
		new->len = str_len(str);
		new->next = NULL;

		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}

		tmp->next = new;
	}

	return (*head);
}


/**
 * str_len - counts character of a given string
 * @str: given string to count its character
 *
 * Return: number of character in a string
 */
int str_len(const char *str)
{
	int cnt = 0;

	if (str == NULL)
		return (0);

	while (*(str + cnt))
	{
		cnt++;
	}

	return (cnt);
}
