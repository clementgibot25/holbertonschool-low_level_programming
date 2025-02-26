#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: string printed
 */

void puts2(char *str)
{
	int i = 0;
	int len = _strlen(str);

	while (i < len)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
