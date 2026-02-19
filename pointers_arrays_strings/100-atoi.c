#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 *
 * Return: the integer value of the converted string
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int found = 0;
	unsigned int res = 0;

	while (s[i] != '\0')
	{
		/* 1. Handle signs */
		if (s[i] == '-')
		{
			sign *= -1;
		}

		/* 2. Process digits */
		if (s[i] >= '0' && s[i] <= '9')
		{
			found = 1;
			res = (res * 10) + (s[i] - '0');
		}
		/* 3. Break if we already found a number and hit a non-digit */
		else if (found)
		{
			break;
		}

		i++;
	}

	if (found == 0)
		return (0);

	return (res * sign);
}
