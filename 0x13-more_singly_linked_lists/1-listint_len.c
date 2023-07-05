#include "lists.h"

/**
 * listint_len - function that Returns the number of elements
 * @h: head
 *
 * Return: always 0
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
