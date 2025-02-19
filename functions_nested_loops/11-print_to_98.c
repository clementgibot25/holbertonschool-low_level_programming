#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: first number given
 *
 * return: 0
 */

void print_to_98(int n)
{
	if (n < 97)
	{
		for (; n < 97; n++)
		{
			printf("%d, ", n);
		}
	printf("98\n");
	}
	else if (n > 97)
	{
	for (; n > 97; n--)
		{
			printf("%d, ", n);
		}
	printf("98\n");
	}
}
