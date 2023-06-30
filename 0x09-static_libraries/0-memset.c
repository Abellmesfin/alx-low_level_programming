#include "main.h"

/**
 * *_memset - function for memory with a constant byte
 * @s: memory
 * @b: char type
 * @n: number of copy
 *
 * Return: always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
