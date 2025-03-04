#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: string containing the characters to match
 *
 * Return: number of bytes in the initial segment of s
 * which only contain characters from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	while (s[i] != '\0' && strchr(accept, s[i]) != NULL)
		i++;
	return (i);
}
