#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints half of a string, followed by a line
 * @str: string to be printed in half
 *
 */

void puts_half(char *str)
{
	int i;
	int len = _strlen(str);
	int length_of_the_string = (len + 1) / 2;

	for (i = length_of_the_string; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
