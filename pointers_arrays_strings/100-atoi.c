#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @str: The string to be converted.
 *
 * Return: The integer value of the string, or 0 if no numbers are found.
 */
int _atoi(char *str)
{
	int sign = 1, num = 0, started = 0;

	while (*str)
	{
		if (*str == '-')
			sign *= -1;
		else if (*str >= '0' && *str <= '9')
		{
			started = 1;
			if (num > (2147483647 - (*str - '0')) / 10)
				return (sign == 1 ? 2147483647 : -2147483648);
			num = num * 10 + (*str - '0');
		}
		else if (started)
			break;
		str++;
	}
	return (num * sign);
}
