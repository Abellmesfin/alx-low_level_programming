#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocating memory.
 * @b: size of memory
 * Return: returns pointer by exit value 98
 */
void *malloc_checked(unsigned int b)
{
	void *alocat;

	alocat = malloc(b);
	if (alocat == NULL)
		exit(98);
	return (alocat);
}
