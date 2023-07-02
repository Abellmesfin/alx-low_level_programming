#include <stdio.h>
#include "main.h"

/**
 * main - function that print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array
 *
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
