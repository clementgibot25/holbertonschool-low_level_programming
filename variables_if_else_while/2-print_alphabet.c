#include <stdio.h>
/**
 * main - prints an alphabet in lowercase with putchar.
 *
 * return: always 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
