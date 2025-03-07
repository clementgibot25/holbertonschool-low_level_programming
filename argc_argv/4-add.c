#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;
	int num;

	for (int i = 1; i < argc; i++)
	{
		int num = 0;
		int j = 0;

		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			num = num * 10 + (argv[i][j] - '0');
			j++;
		}

		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
