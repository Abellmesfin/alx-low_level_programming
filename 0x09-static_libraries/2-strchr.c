#include "main.h"
#include <stdio.h>

/**
 * *_strchr - function that locates a character in a string
 * @s: string
 * @c: char
 *
 * Return: always 0
 */
char *_strchr(char *s, char c)
{
	int x;

	while (1)
	{
		x = *s++;
		if (x == c)
		{
			return (s - 1);
		}
		if (x == 0)
		{
			return (NULL);
		}
	}
}
