#include "lists.h"

/**
 * add_nodeint - Function that Adds a new node at the beginning
 * @head: head
 * @n: node
 *
 *Return: always 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
