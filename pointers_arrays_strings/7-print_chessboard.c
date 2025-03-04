#include "main.h"

/**
 * print_chessboard - prints the chessboard stored in a 2D array
 * @a: 2D array of characters, where a[i][j] represents the square
 *     at row i and column j
 *
 * The chessboard is printed in the standard 8x8 format, with the
 * rank (rows) labeled 0-7 and the file (columns) labeled 0-7.
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
