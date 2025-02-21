#include "main.h"

/**
 * print_times_table - prints the n time table starting from 0
 * if n is greater than 15 or less than 0, the function does nothing
 * @n: the number to print the time table
 */

void print_times_table(int n)
{
    int row, col, product;

    if (n >= 0 && n <= 15)
    {
        for (row = 0; row <= n; row++)
        {
            for (col = 0; col <= n; col++)
            {
                product = row * col;
                if (col == 0)
                {
                    _putchar('0');
                }
                else
                {
                    _putchar(',');
                    _putchar(' ');
                    if (product <= 9)
                    {
                        _putchar(' ');
                        _putchar(' ');
                        _putchar(product + '0');
                    }
                    else if (product <= 99)
                    {
                        _putchar(' ');
                        _putchar((product / 10) + '0');
                        _putchar((product % 10) + '0');
                    }
                    else
                    {
                        _putchar((product / 100) + '0');
                        _putchar(((product / 10) % 10) + '0');
                        _putchar((product % 10) + '0');
                    }
                }
            }
            _putchar('\n');
        }
    }
}