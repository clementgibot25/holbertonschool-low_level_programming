#include <stdio.h>

/**
 * main - Prints the alphabet except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		if (lettre != 'e' && lettre != 'q')
			putchar(lettre);
	}

	putchar('\n');

	return (0);
}
