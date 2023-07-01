#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function for printing name
 * @name: print
 * @f: function to the pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
