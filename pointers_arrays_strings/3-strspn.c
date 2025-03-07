#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The main string to search in.
 * @accept: The substring containing characters to match.
 *
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, found;

	while (*s)
	{
		found = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
			}
		}
		if (found)
		{
			count++;
			s++;
		}
		else
		{
			return (count);
		}
	}

	return (count);
}
