#include "main.h"
#include <stdio.h>

/**
 * print_array - prints 'n' elements of array of integers
 * @a: the array of integers
 * @n: the number of elements to print
 */
void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        _putchar("%d", a[i]);
        if (i < n - 1)
        {
            _putchar(", ");
        }
    }
    _putchar("\n");
}
