#include "main.h"

/**
 * jack_bauer - count every minutes in 24 hours
 *
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar(h);
			_putchar(':');
			_putchar(m);
		}
	}
}
