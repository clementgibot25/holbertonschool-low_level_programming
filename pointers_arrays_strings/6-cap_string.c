#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to modify.
 *
 * Return: The modified string.
 */
char *cap_string(char *s)
{
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= 32;
	}

	for (i = 1; s[i] != '\0'; i++)
	{
		if (s[i - 1] == ' ' || s[i - 1] == ',' || s[i - 1] == ';' ||
				s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?' ||
				s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' ||
				s[i - 1] == '{' || s[i - 1] == '}' || s[i - 1] == '\t' ||
				s[i - 1] == '\n')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
			}
		}
	}

	return (s);
}
