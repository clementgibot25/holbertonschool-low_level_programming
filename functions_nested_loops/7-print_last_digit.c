#include "main.h"
/*
 * print_last_digit - print the last digit of a number
 *
 * @n: the number we searching the last digit of
 *
 * Return: i
 */
int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
		i = -i;

	return (i);
}
