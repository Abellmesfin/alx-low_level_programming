#include "main.h"

/**
 * _strncat - function that concatenates n bytes from a string
 * @dest: destination for string
 * @src: source string
 * @n: number of bytes
 *
 * Return: always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
		x++;
	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
