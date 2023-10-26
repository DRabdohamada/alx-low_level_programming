#include "main.h"

/**
 * set_bit - the value of a bit in binary value of 1 at specific index.
 * @index: the specific point to change
 * @n: the original binary number
 * Return: 1 if worked, or -1 if  error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	k = 1 << index;
	*n = *n | k;

	return (1);
}
