#include "main.h"
#include <stddef.h>
#include <stdlib.h>


/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int j;
	unsigned int i = 0;

	j = n ^ m;

	while (j != 0)
	{
		i += j & 1;
		j >>= 1;
	}

	return (i);
}
