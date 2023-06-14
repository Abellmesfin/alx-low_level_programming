#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - pointer with 2 dimensional array of integers.
 * @width: width.
 * @height: height.
 *
 * Return: returns pointer into 2 dimentional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **out;
	int x, y;

	if (width < 1 || height < 1)
		return (NULL);
	out = malloc(height * sizeof(int *));
	if (out == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		out[x] = malloc(sizeof(int) * width);
			if (out[x] == NULL)
			{
				for (x--; x >= 0; x--)
					free(out[x]);
				free(out);
				return (NULL);
			}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			out[x][y] = 0;
		}
	}

	return (out);
}
