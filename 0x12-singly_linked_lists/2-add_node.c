#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: reference to the first node
 * @str: data to store in new node
 *
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	/** is head == NULL **/
	/** yes **/
	if (*head == NULL)
	{
		*head = malloc(sizeof(list_t));
		if (*head == NULL)
			return (NULL);

		(*head)->str = strdup(str);
		(*head)->next = NULL;
		(*head)->len = str_len(str);
	}

	else
	{
		/** no **/
		list_t *new = malloc(sizeof(list_t));

		if (new == NULL)
			return (NULL);

		new->next = *head;
		new->str = strdup(str);
		new->len = str_len(str);

		*head = new;
	}

	return (*head);

}

/**
 * str_len - counts the number of character in a given string
 * @str: given string
 *
 * Return: number of characters
 */
int str_len(const char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);

	while (*(str + i))
	{
		i++;
	}

	return (i);
}
