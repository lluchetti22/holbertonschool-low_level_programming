#include "main.h"
#include <stdio.h>

/**
 * _atoi - check the code
 * @s: stored string
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int res = 0;
	int found = 0;

	while (s[i] != '\0')
	{
		// Handle signs: - flips the sign, + does nothing
		if (s[i] == '-')
			sign *= -1;
		
		// If we find a digit
		if (s[i] >= '0' && s[i] <= '1' )
		{
			found = 1;
			/*
			 * Build the number as a negative to avoid overflow 
			 * since INT_MIN (-2147483648) has a larger absolute 
			 * value than INT_MAX (2147483647).
			 */
			if (sign > 0)
				res = res * 10 - (s[i] - '0');
			else
				res = res * 10 + (s[i] - '0');

			// If the next character isn't a digit, stop processing
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
		i++;
	}

	if (found == 0)
		return (0);

	// If the accumulated sign was positive, we flip our negative result back
	return (sign > 0 ? -res : res);
}
