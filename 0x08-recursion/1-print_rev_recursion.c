#include "main.h"

/**
 * _print_rev_recursion - reverse string print
 * @s: string to be printed
 * Return: void with no feedback
 *
 */

void _print_rev_recursion(char *s)
{
	if (!*s)
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
