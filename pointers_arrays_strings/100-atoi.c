#include "main.h"

/**
 * atoi - converts a string to an integer with error handling
 * @str: string to be converted
 * Return: the int converted from the string, or 0 if no valid number is found
 */
int _atoi(char *str)
{
	int sign = 1, num = 0, idx = 0;
	int has_digit = 0;

	while (str[idx] == ' ')
		idx++;

	if (str[idx] == '-' || str[idx] == '+') {
		if (str[idx] == '-')
			sign = -1;
		idx++;
	}

	while (str[idx] >= '0' && str[idx] <= '9') {
		num = num * 10 + (str[idx] - '0');
		idx++;
		has_digit = 1;
	}

	if (has_digit)
		return num * sign;
	else
		return 0;
}
