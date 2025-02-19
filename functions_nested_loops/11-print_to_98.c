#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: first number given
 *
 * return: nothing
 */

void print_to_98(int n)
{
	if (n < 97)
	{
		for (; n < 97; n++)
		{
			printf("%d\n", n);
		}
	}
	else if (n > 97)
	{
		for (; n > 97; n--)
		{
			printf("%d\n", n);
		}
	}
}
