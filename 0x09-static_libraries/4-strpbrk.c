#include "main.h"

/**
 * _strpbrk - Function that searches a string for any of a set of bytes
 * @s: string to search
 * @accept: stringcontaining the bytes to look for
 *
 * Return: always 0
 */
char *_strpbrk(char *s, char *accept)
{
        int i;

        while (*s)
        {
                for (i = 0; accept[i]; i++)
                {
                        if (accept[i] == *s)
                                return (s);
                }
                s++;
        }

        return ('\0');
}
