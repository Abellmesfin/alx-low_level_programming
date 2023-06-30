#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: character
 * Return: always 0, 1 if c is a letter
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
