#include "main.h"

/**
 * get_bit - retrieves the value of a bit at a given index.
 * @n: the number to evaluate.
 * @index: the index of the bit to retrieve, starting from 0.
 *
 * Return: the value of the bit at the specified index (0 or 1),
 *         or -1 if an error occurred (e.g., index is out of range).
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
