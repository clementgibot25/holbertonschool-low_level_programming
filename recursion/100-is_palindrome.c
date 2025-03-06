#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 * Return: 1 if it is, 0 if not
 */
int is_palindrome(char *s)
{
    int len = 0;
    char *end = s;

    while (*end != '\0') {
        len++;
        end++;
    }

    return _is_palindrome(s, 0, len - 1);
}

int _is_palindrome(char *s, int i, int len)
{
    if (i >= len)
        return 1;
    if (s[i] != s[len])
        return 0;
    return _is_palindrome(s, i + 1, len - 1);
}
