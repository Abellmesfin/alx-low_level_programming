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

	va_start(list, n);

	for (x = 0; x < n; x++)
	{
		poi = va_arg(list, char *);
		if (!poi)
			poi = "(nil)";
		if (!separator)
			printf("%s", poi);
		else if (separator && x == 0)
			printf("%s", poi);
		else
			printf("%s%s", separator, poi);
	}

	printf("\n");

	va_end(list);
}
