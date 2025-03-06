#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
    if (n <= 1)
        return (0);
    if (n == 2)
        return (1);
    if (n % 2 == 0)
        return (0);
    return (check_odd_factors(n, 3));
}

/**
 * check_odd_factors - checks if a number has an odd factor
 * @n: number to check
 * @i: current number to check
 *
 * Return: 1 if no odd factor, 0 if odd factor
 */
int check_odd_factors(int n, int i)
{
    if (i * i > n)
        return (1);
    if (n % i == 0)
        return (0);
    return (check_odd_factors(n, i + 2));
}
