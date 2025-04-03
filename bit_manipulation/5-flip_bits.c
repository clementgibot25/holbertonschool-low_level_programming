#include "main.h"

/**
 * flip_bits - counts the number of bits that need to be flipped
 *              to get from one number to another
 * @n: the number to flip from
 * @m: the number to flip to
 *
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			count++;
		n >>= 1;
		m >>= 1;
	}

	return (count);
}
