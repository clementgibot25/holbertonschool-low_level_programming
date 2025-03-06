#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
    if (n == 2)
        return (1);
    if (n % 2 == 0 || n <= 1)
        return (0);
    return (is_prime_number(n - 2));
}
