#include "variadic_functions.h"

/**
 * sum_them_all - summation of its parameters
 * @n: function for parameter number
 *
 * Return: always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int x;
	int sum = 0;

	va_start(list, n);

	for (x = 0; x < n; x++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
