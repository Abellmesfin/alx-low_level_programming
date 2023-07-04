#include "main.h"

/**
 * _strncat - function that concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
        int index = 0, len = 0;

        while (dest[index++])
                len++;
        for (index = 0; src[index] && index < n; index++)
                dest[len++] = src[index];
        return (dest);
}
