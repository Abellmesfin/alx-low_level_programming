#include "main.h"

/**
 * *_strspn - function that gets the length of substring
 * @s: string
 * @accept: list of characters that are similar
 *
 * Return: always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y, z, str;

	z = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		str = 0;
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				z++;
				str = 1;
			}
		}
		if (str == 0)
		{
			return (z);
		}
	}
	return (0);
}
