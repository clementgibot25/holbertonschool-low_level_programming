#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: the number of arguments.
 * @av: an array of strings representing the arguments.
 *
 * Return: a pointer to a new string, or NULL if ac == 0 or av == NULL,
 * or if memory allocation fails. Each argument is followed by a newline
 * character in the resulting string.
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, total_length = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			;
		total_length += j + 1;
	}

	str = malloc(sizeof(char) * (total_length + 1));
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);
}
