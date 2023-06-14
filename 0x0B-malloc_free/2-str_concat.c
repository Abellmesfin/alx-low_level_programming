#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *prt;
	unsigned int x, y, z, leng
		;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		;

	for (y = 0; s2[y] != '\0'; y++)
		;
	prt = malloc(sizeof(char) * (x + y + 1));
	if (prt == NULL)
		return (NULL);
	for (z = 0; z < x; z++)
		prt[z] = s1[z];
	leng = y;
	for (y = 0; y <= leng; z++, y++)
		prt[z] = s2[y];
	return (prt);
}
