#include "variadic_functions.h"

/**
 * print_strings - prints string parameters
 * @separator: pointer numbers
 * @n:function for number parameter
 *
 * Return always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *poi;

	va_list list;

	va_start(valist, n);

	for (x = 0; x < n; x++)
	{
		poi = va_arg(valist, char *);

		if (poi)
			printf("%s", poi);
		else
			printf("(nil)");

		if (x < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
