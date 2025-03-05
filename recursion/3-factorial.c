#include "main.h"

/**
 * factorial - return factorial of given number
 * @n: number
 * Return: factorial
 */
int factorial(int n) {

    if (n < 0)
    {
        return (-1);
    }
    if (n == 1)
    {
        return (0);
    }
    return n * factorial(n - 1);
}
