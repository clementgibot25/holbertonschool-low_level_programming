#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: Number of arguments passed to the program.
 * @argv: Array of pointers to the arguments passed to the program.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
