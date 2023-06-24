#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int siz, x;
	char *arg;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	siz = atoi(argv[1]);

	if (siz < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arg = (char *)main;

	for (x = 0; x < siz; x++)
	{
		if (x == siz - 1)
		{
			printf("%02hhx\n", arg[x]);
			break;
		}
		printf("%02hhx ", arg[x]);
	}
	return (0);
}
