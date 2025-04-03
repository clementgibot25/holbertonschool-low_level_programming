#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: the number to print in binary
 *
 * Description: This function prints the binary representation of a number
 *              by recursively dividing the number by 2 and printing the
 *              remainder.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
