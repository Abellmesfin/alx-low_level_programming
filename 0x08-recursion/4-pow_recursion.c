#include "main.h"

/**
 * _pow_recursion - turns the value of x raised to the power of y.
 * @x: Integer which is called as base.
 * @y: Integer which is called as exponent.
 * Return: int to return value of the power mathematics.
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		/**
		 * if-else if: we can also make it through if statement
		 * rather than saying else if. I used recursive call of _pow_recursion.
		 *
		 */
		return (-1);
	else if (y !=0) /*I can also select as y ==0*/
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
