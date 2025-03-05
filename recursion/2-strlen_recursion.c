#include "main.h"

/**
 * _str_len_recursion - returns the length of a string
 * @s: the string
 * Return: the length of the string
 */
int _str_len_recursion(char *s)
{
    if (*s == '\0')
        return (0);

    return (1 + _str_len_recursion(s + 1));
}
