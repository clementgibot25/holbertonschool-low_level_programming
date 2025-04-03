#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A string containing the binary number.
 *
 * Return: The converted unsigned int, or 0 if the string is NULL
 *         or contains characters not '0' or '1'.
 */

unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;
    int i = 0;

    if (b == NULL)
        return (0);

    while (b[i] != '\0')
    {
        if (b[i] != '0' && b[i] != '1')
            return (0);

        result <<= 1;
        result |= (b[i] - '0');
        i++;
    }

    return (result);
}
