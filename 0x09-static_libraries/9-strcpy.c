#include "main.h"

/**
 * *_strcpy - function that copies the string pointed
 * @dest: pointer to the buffer
 * @src: string
 *
 * Return: always 0
 */
char *_strcpy(char *dest, char *src)
{
	int l, x;

	l = 0;

	while (src[l] != '\0')
	{
		l++;
	}
	for (x = 0; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}
