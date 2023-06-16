

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * memory_set - copy char into the memory.
 * @s: malloc string pointer
 * @b: input pointer
 * @n: size of bytes
 * Return: string
 */
char *memory_set(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array using malloc.
 * @nmemb: nunber of elements.
 * @size: bytes of size of elements
 * Return: returns newly allocated pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *prt;

	if (nmemb == 0 || size == 0)
		return (NULL);
	prt = malloc(nmemb * size);

	if (prt == NULL)
		return (NULL);
	memory_set(prt, 0, (nmemb * size));
	return (prt);
}
