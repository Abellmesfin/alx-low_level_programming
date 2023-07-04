#include "main.h"

/**
 * _strcpy - Function that Copy paste string
 * @dest: destination
 * @src: source
 *
 * Return: always 0
 */
char *_strcpy(char *dest, char *src)
{
        int len, i;

        len = 0;

        while (src[len] != '\0')
        {
                len++;
        }
        for (i = 0; i < len; i++)
        {
                dest[i] = src[i];
        }
        dest[i] = '\0';
        return (dest);
}
