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

	i = malloc(sizeof(list_t));
	if (i == NULL)
		return (NULL);
	i->str = strdup(str);
	for (y = 0; str[y]; y++)
		;
	i->len = y;
	i->next = NULL;
	x = *head;
	if (x == NULL)
	{
		*head = i;
	}
	else
	{
		while (x->next != NULL)
			x = x->next;
		x->next = i;
	}
	return (*head);
}
