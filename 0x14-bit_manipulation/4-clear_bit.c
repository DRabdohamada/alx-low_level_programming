#include "main.h"


/**
 * clear_bit - sets the value of a bit to 0 at specific index.
 * @n: original num
 * @index: the bit you want to set
 * Return: 1 if worked, or -1 if an error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int k;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	k = ~(1 << index);
	*n = *n & k;

	return (1);
}
