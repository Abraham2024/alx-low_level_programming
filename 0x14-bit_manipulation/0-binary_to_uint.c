#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: value
 */
unsigned int binary_to_uint(const char *b)
{
	/* this sinppet means that if b is null return value = 0*/
	unsigned int value = 0;
		if (b == NULL)
			return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		value <<= 1;
		if (*b++ == '1')
			value += 1;
	}
	return (value);
}