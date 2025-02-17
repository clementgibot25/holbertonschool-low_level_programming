#include <stdio.h>

/**
 * main - prints the alphabet in reverse
 *
 * Return: always 0
 */
int main(void)
	{
		char lettre;

		for (lettre = 'z'; lettre > 'a'; lettre--)
			putchar(lettre);

		putchar('\n')

		return (0);
	}
