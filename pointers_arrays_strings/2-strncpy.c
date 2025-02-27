#include "2-strlen.c"
#include "main.h"

/**
 * _strncpy - copy string pointed to by src to dest
 * @dest: destination
 * @src: string
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
