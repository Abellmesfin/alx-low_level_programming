#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string length to be measured
 * Return: int returns the length of a string in _strlen_recursion.
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0') /* if else statement which will add 1*/
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
