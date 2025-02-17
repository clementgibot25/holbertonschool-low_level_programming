#include <stdio.h>

/**
 * main - print numbers of base 16
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 15; num++)
	{
		putchar("%x", num);
	}
	putchar("\n");
	return (0);
}
