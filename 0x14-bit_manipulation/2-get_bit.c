#include "main.h"

/**
 * get_bit - returns the value of a bit if exist as at a given index
 * @n: checking num
 * @index: checkbit
 *
 * Return: the value if exist
 */

int get_bit(unsigned long int n, unsigned int index)
{

	unsigned long int a, z;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	a = 1 << index;
	z = n & a;
	if (z == a)
		return (1);

	return (0);

}
