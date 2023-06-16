#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string one
 * @s2: string two
 * @n: boundary
 * Return: pointer to the memory with boundaries of s1 & s2, NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *prt;
	unsigned int l1 = 0, l2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	for (l1 = 0; s1[l1] != '\0'; l1++)
	{
	}
	for (l2 = 0; s2[l2] != '\0'; l2++)
	{
	}

	if (n > l2)
	n = l2;
	prt = malloc((l1 + n + 1) * sizeof(char));

	if (prt == NULL)
		return (0);
	for (i = 0; i < l1; i++)
	{
		prt[i] = s1[i];
	}
	for (; i < (l1 + n); i++)
	{
		prt[i] = s2[i - l1];
	}
	prt[i] = '\0';

return (prt);
}
