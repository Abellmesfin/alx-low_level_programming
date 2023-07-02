#include <stdio.h>
#include "main.h"

/**
 * _atoi - function that converts a string to an integer
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
 * main - function that multiplies two numbers
 * @argc: number of arguments
 * @argv: array
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int prod, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	prod = num1 * num2;
	printf("%d\n", prod);
	return (0);
}
