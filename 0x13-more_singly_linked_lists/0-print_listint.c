#include "lists.h"

/**
 * print_listint - Function that prints all the elements
 * @h: head
 *
 * Return: always 0
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *head = h;
	size_t cnt = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		cnt += 1;
		head = head->next;
	}
	return (cnt);
}
