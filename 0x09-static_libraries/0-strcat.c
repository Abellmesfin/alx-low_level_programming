#include "main.h"

/**
 *_strcat - function that concatenates two strings
 *@dest: appended string
 *@src: concatenated string
 *
 * Return: returns poiner to @dest
 */
char *_strcat(char *dest, char *src)
{
        int index = 0, len = 0;

        while (dest[index++])
                len++;
        for (index = 0; src[index]; index++)
                dest[len++] = src[index];
        return (dest);
}
