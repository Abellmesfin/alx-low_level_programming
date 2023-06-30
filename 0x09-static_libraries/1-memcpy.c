#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination for memory
 * @src: memory
 * @n: number of bytes
 *
 * Return:always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
