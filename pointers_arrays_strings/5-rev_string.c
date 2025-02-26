#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - function that reverses a string
 * @s: string that will be reversed
 *
 */
void rev_string(char *s)
{
	int a = 0;
	int b = _strlen(s) - 1;
	char c;

	while (a < b)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;

		a++;
		b--;
	}
}