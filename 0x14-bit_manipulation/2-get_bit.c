#include "main.h"

/**
 * get_bit:  returns the value of a bit
 *
 *@n : the value to be printed
 *
 * return: n
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}