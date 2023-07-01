#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints elements of a linked list
 * @h: list_t list to print
 *
 * Return: always 0
 */
size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
