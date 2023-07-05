#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: head of the list
 *
 * Return: the deleted node data
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;
	return (num);
}
