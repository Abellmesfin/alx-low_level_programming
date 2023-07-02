#include <stdio.h>
#include "main.h"

/**
 * _atoi - function that converts string to an integer
 * @s: string
 *
 * Return: always 0
 */
int _atoi(char *s)
{
	int x, y, n, len, z, digit;

	x = 0;
	y = 0;
	n = 0;
	len = 0;
	z = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (x < len && z == 0)
	{
		if (s[x] == '-')
			++y;
		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (y % 2)
				digit = -digit;
			n = n * 10 + digit;
			z = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			z = 0;
		}
		x++;
	}
	if (z == 0)
		return (0);
	return (n);
}

/**
 * main - function that adds two positive number
 * @argc: number of arguments
 * @argv: array
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int sum, num, x, y, z;

	sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] > '9' || argv[x][y] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (z = 1; z < argc; z++)
	{
		num = _atoi(argv[z]);
		if (num >= 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
