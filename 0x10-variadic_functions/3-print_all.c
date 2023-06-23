#include "variadic_functions.h"

/**
 * print_all - prints string parameter
 * @format:list of argument parameters
 *
 * Return always 0
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *poi, *sepa = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", sepa, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sepa, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sepa, va_arg(list, double));
					break;
				case 's':
					poi = va_arg(list, char *);
					if (!poi)
						poi = "(nil)";
					printf("%s%s", sepa, poi);
					break;
				default:
					x++;
					continue;
			}
			sepa = ", ";
			x++;
		}
	}

	printf("\n");
	va_end(list);
}
