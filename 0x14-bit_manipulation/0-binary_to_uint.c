#include "main.h"

/**
 * binary_to_uint - function converts a binary number to  unsigned integer
 * @b: pointing to a string contain 0 and 1 characters
 *
 * Return:converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{

	int i;
	unsigned int n;

	n = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')

			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		n <<= 1;
		if (b[i] == '1')
			n += 1;
	}

	return (n);
}
