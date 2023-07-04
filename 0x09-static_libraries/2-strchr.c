#include "main.h"

/**
 * _strchr - Function that locates a character in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: returns pointer to first occcurence
 */
char *_strchr(char *s, char c)
{
                int i;

                while (1)
                {
                        i = *s++;
                        if (i == c)
                        {
                                return (s - 1);
                        }
                        if (i == 0)
                        {
                                return (NULL);
                        }
                }
}
