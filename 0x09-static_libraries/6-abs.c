#include "main.h"
/**
 * _abs - Function that prints the absolute value of a number
 * @a: number targeted
 *
 * Return: returns 0
 */
int _abs(int a)
{
        if (a > 0)
                return (a);
        else if (a < 0)
                return (-a);
        else
                return (0);
}
