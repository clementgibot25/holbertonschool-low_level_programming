#include <stdio.h>

/**
 * main - Prints the number of command line arguments, and then
 *        prints each argument.
 *
 * @argc: Number of command line arguments.
 * @argv: Array of command line arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
    int i;
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return 0;
}
