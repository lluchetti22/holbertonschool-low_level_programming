#include "main.h"
#include <stdio.h>

/**
 * _atoi - check the code
 * @s: stored string
 * Return: Always 0.
 */

int _atoi(char *s)
{

int i;
int sign = 0;
int res = 0;
int found = 0;

for (i = 0; s[i] != '\0'; i++)
{

if (s[i] == '-')
{
sign *= -1;
}

if (s[i] >= '0' && s[i] <= '1')
{
found = 1;

if (sign > 0)
{
res = res * 10 - (s[i] - '0');
}
else
{
res = res * 10 + (s[i] - '0');
}

if (s[i + 1] < '0' || s[i + 1] > '9')
{
break;
}

}

}

if (found == 0)
{
return (0);
}

return (sign > 0 ? -res : res);

}
