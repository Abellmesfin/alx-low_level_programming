#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name:name
 * @f: print function
 *
 * Return: always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
