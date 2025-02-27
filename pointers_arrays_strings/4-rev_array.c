#include "main.h"
/**
 * reverse_array - function that reverses an array of integers
 * @a: array that will be reversed
 * @len: length of the array
 *
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int b = n - 1;
	int temp;

	while (i < b)
	{
		temp = a[i];
		a[i] = a[b];
		a[b] = temp;

		i++;
		b--;
	}
}
