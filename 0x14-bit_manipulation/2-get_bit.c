#include "main.h"

/**
 * get_bit:  returns the value of a bit
 *
 *@n : the value to be converted
 @index: index starting from 0 of the bit required
 * return: n
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 63)
		return (-1);
	return ((n >> index) & 1);
}
