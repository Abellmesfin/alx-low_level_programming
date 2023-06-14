#include "main.h"

/**
 * create_array -prints an array.
 * @size: allocate number
 * @c: initializes for char
 *
 * Return: If size == 0 or the function fails.
 */
char *create_array(unsigned int size, char c)
{
	char *memo;
	unsigned int poin;

	if (size == 0)
		return (NULL);
	memo = size * malloc(sizeof(c)); /*define values through malloc*/
	if (memo == NULL)
		return (NULL);
	for (poin = 0; poin < size; poin++)
		memo[poin] = c;
	return (memo);
}
