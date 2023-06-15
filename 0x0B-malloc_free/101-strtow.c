#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * word_number - function to count the number of words in a string
 * @s: string checking
 *
 * Return: number of words
 */
int word_number(char *s)
{
	int i, j, ind;

	ind = j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			ind = 0;
		else if (ind == 0)
		{
			ind = 1;
			j++;
		}
	}

	return (j);
}
/**
 * **strtow – word split
 * @str: string
 *
 * Return: pointer to Success or Error
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int y = 0, leng = 0, index, i = 0, x start = 0, end;

	while (*(str + leng))
		leng++;
	index = word_number(str);
	if (index == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (index + 1));
	if (matrix == NULL)
		return (NULL);

	for (x = 0; x <= leng; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (i)
			{
				end = x;
				tmp = (char *) malloc(sizeof(char) * (i + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[y] = tmp - i;
				y++;
				i = 0;
			}
		}
		else if (i++ == 0)
			start = x;
	}
	matrix[y] = NULL;
	return (matrix);
}
