#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments (type: int)
 * @av: array of arguments (type: char **)
 *
 * Return: pointer to a new string (type: char *), or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	for (j = 0; av[i][j] != '\0'; j++)
		;

	str = malloc(sizeof(char) * (i + j + 1));
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
