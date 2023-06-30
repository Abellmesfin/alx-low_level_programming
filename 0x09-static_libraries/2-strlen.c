#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string
 *
 * Return: always 0
 */
int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
