#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array
 *
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *value;
	int x, y, z, leng;

	if (ac == 0 || av == 0)
		return (NULL);
	for (x = leng = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			leng++;
		leng++;
	}
	value = malloc(sizeof(char) * (leng + 1));
	if (value == NULL)
		return (NULL);
	for (x = z = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++, z++)
			value[z] = av[x][y];
		value[z] = '\n';
		z++;
	}
	value[z] = '\0';
	return (value);
}
