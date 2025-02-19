#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @n: the number checked
 *
 * Return: i
 */

int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}
