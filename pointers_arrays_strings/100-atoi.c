#include "main.h"
#include <stdio.h>

/**
 * _atoi - check the code
 * @s: stored string
 * Return: Always 0.
 */

int _atoi(char *s)
{
int i, sign, found;
unsigned int res;

i = 0;
sign = 1;
res = 0;
found = 0;

while (s[i] != '\0')
{

if (s[i] == '-')
{
sign *= -1;
}

if (s[i] >= '0' && s[i] <= '9')
{
found = 1;
res = (res * 10) + (s[i] - '0');

if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
{
break;
}
}
i++;
}

if (found == 0)
{
return (0);
}
return (sign * res);
}
