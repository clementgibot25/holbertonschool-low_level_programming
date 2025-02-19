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
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		printf("98\n")
	}
}
