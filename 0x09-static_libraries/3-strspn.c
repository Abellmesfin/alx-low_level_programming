#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: always 0
 */
unsigned int _strspn(char *s, char *accept)
{
        unsigned int num = 0;
        int i;

        while (*s)
        {
                for (i = 0; accept[i]; i++)
                {
                        if (accept[i] == *s)
                        {
                                num++;
                                break;
                        }
                        else if ((accept[i + 1]) == '\0')
                                return (num);
                }
                s++;
        }
        return (num);
}
