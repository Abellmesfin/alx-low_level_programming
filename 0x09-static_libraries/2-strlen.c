#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: string
 *
 * Return: returns lenght;
 */
int _strlen(char *s)
{
        int cnt, i;

        i = 0;

        for (cnt = 0; s[cnt] != '\0'; cnt++)
                i++;
        return (i);
}
