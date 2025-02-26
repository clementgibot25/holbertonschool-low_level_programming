#include "2-strlen.c"
#include "main.h"

/**
 * _strcpy - copy string pointed to by src to dest
 * @dest: destination
 * @src: string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int n = _strlen(src);
	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
