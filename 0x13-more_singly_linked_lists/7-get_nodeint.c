#include "lists.h"
/**
 * get_nodeint_at_index - Function that return the nth node of a linked list
 * @head: pointer to the head
 * @index: index of the node required
 *
 * Return: the address of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
