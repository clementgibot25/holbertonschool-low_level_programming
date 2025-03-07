#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add two numbers
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j = 0, k;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (k = 0; argv[i][k] != '\0'; k++)
		{
			if (!isdigit(argv[i][k]))
			{
				printf("Error\n");
				return (1);
			}
		}
		j += atoi(argv[i]);
	}

	printf("%d\n", j);
	return (0);
}
