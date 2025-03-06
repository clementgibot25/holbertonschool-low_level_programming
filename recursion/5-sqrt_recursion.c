#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;
    if (n == 0 || n == 1)
        return n;
    return _sqrt_recursion_iteration(n, 1);
}
int _sqrt_recursion_iteration(int n, int i)
{
    if (i * i == n)
        return i;
    if (i * i > n)
        return -1;

    i++;
    return _sqrt_recursion_iteration(n, i);
}
