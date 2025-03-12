#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: minimum value in the array
 * @max: maximum value in the array
 *
 * Return: pointer to the created array
 */
int *array_range(int min, int max)
{
	int *array;
	int size;
	int i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + i;

	return (array);
}
