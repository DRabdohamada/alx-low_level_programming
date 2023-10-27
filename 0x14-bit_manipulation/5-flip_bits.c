#include "main.h"

/**
 * flip_bits - number of flip need to change ine number to be equal to another number.
 * @n: first number
 * @m: second number
 * Return: the number of bits to make the flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int xor, rxor;
	unsigned int n, j;

	n = 0;
	rxor = 1;
	xor = n ^ m;

	for (j = 0; j < (sizeof(unsigned long int) * 8); j++)
	{
		if (rxor == (xor & rxor))
			n++;

		rxor <<= 1;
	}


	return (n);
}
