#include "main.h"
#include <stdio.h>

/**
 * _atoi - check the code
 * @s: stored string
 * Return: Always 0.
 */

int myAtoi(char* s)
{
int sign = 1, res = 0, i = 0;

while (s[i] == ' ')
{
i++;
}

if (s[i] == '-' || s[i] == '+')
{

if (s[i++] == '-')
{
sign = -1;
}
}

while (s[i] >= '0' && s[i] <= '9')
{

if (res > INT_MAX / 10 || (res == INT_MAX / 10 && s[idx] - '0' > 7))
{
return sign == 1 ? INT_MAX : INT_MIN;
}

res = 10 * res + (s[idx++] - '0');
}

return (res * sign);
}
