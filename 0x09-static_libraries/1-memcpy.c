#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: copied holder
 * @src: string copy
 * @n:number of bytes
 * Return: returns a pointer to n
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int i;

        i = 0;

        for (; i < n; i++)
                dest[i] = src[i];

        return (dest);
}
