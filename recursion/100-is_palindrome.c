#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 * Return: 1 if it is, 0 if not
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (check_pal(s, 0, len - 1));
}

/**
 * check_pal - checks if a string is a palindrome
 * @s: the string to check
 * @i: the first index to compare
 * @j: the last index to compare
 * Return: 1 if it is, 0 if not
 */
int check_pal(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (check_pal(s, i + 1, j - 1));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to check
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
