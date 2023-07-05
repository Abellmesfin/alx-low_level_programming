#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 * @head: pointer to the listint_t list to be freed
 *
 * return: always 0
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;
	while (*head)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	*head = NULL;
}
