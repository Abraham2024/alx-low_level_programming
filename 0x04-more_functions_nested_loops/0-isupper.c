#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to test
 * Return: 1 for true and 0 for false
 */

int _isupper(int c);

/**
 * _isupper - checks for uppercase character
 * @c: character to test
 * Return: 1 if upper 0 if not upper
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
