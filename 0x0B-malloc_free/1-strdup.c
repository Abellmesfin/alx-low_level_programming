#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space.
 * @str: string being copied.
 *
 * Return: pointer to be allocated by the string
 */
char *_strdup(char *str)
{
	char *alloc;
	unsigned int x, y;

	if (str == NULL)
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
		;
	alloc = (char *)malloc(sizeof(char) * (x + 1));
	if (alloc == NULL)
		return (NULL);
	for (y = 0; y <= x; y++)
		alloc[y] = str[y];
	return (alloc);
}

