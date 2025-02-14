#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("size of a char: %lu bytes(s)\n",sizeof(char));
	printf("size of a int: %lu bytes(s)\n",sizeof(int));
	printf("size of a long int: %lu byte(s)\n",sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n",sizeof(long long int));
	printf("size of a float: %lu byte(s)\n",sizeof(float));
		return (0);
}
