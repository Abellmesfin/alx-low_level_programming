#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at beginning of a linked list
 * @head: pointer
 * @str: string
 *
 * Return: always 0
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *i;
	size_t x;

	i = malloc(sizeof(list_t));
	if (i == NULL)
		return (NULL);
	i->str = strdup(str);
	for (x = 0; str[x]; x++)
		;
	i->len = x;
	i->next = *head;
	*head = i;
	return (*head);
}
