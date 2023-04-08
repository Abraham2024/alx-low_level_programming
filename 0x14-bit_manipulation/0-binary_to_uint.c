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
	unsigned int j = 0;
		if (b == NULL)
			return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		j = (j << 1) + (*b - '0');
		b++;
	}
	return (j);
}
/**
 * This code snippet initializes an unsigned
 * integer j to 0. If b is NULL, it returns 0.
 * It then enters a while loop
 * that checks if the value of *b is true or false
 * If it is true, it checks if the value of *b is not equal to ‘0’ and
 * not equal to ‘1'
 * If it is not equal to either ‘0’ or ‘1’, it returns 0.
 * If it is equal to either ‘0’ or ‘1’, it shifts
 * the value of j one bit to the left and adds 1
 * if the value of *b is equal to ‘1’.
 * Finally, it returns the value of j.
 */

