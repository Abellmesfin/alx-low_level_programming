#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte
 * @s:target
 * @b: constant byte
 * @n:number of byte
 * Return: always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
        while (n)
        {
                s[n - 1] = b;
                n--;
        }
        return (s);
}
