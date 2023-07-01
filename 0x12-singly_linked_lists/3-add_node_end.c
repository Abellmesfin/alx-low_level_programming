#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node to the end of the list
 * @head: pointer
 * @str: string
 *
 * Return: always 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *i;
	list_t *x;
	size_t y;

	while (str[y])
		y++;

	i = malloc(sizeof(list_t));
	if (!i)
		return (NULL);
	i->str = strdup(str);
	i->len = y;
	i->next = NULL;

	if (*head == NULL)
	{
		*head = i;
		return (i);
	}
	while (x->next)
		x = x->next;
	x->next = i;
	return (i);
}
