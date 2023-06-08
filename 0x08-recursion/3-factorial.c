#include "main.h"

/**
 * factorial - turns factorial of a number.
 * @n: select a number to be factorized.
 * Return: int to return factorial of the number n.
 *
 */
int factorial(int n)
{
	if (n < 0) 
		/**
		 * nested if: we can also make it through if statement 
		 * rather than saying else if. I used recursive call return
		 *
		 */
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1)); 
}
