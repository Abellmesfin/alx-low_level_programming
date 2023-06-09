#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function searches for an integer
 * @array: array
 * @size: size of the array
 * @cmp: comparing pointer
 *
 * Return: always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
				return (x);
		}
	}

	return (-1);
}
