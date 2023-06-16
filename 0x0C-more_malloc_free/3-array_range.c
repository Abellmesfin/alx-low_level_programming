#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: lower number
 * @max: higher number
 * Return: returns array into the memory
 */
int *array_range(int min, int max)
{
	int *prt, i = 0, j = min;

	if (min > max)
		return (0);
	prt = malloc((max - min + 1) * sizeof(int));

	if (!prt)
		return (0);
	while (i <= max - min)
		prt[i++] = j++;
	return (prt);
}
