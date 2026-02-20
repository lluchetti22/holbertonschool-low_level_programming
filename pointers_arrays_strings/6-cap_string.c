#include "main.h"
#include <stdio.h>

/**
 * cap_string - check the code
 * @s: stored char
 * Return: Always 0.
 */

char *cap_string(char *s)
{
int i, x;
char sep[] = " \t\n,;.!?\"(){}";

for (i = 0; s[i] != '\0'; i++)
{

if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
{
s[i] = s[i] - 32;
}

for (x = 0; sep[x] != '\0'; x++)
{

if (s[i] == sep[x])
{

if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
s[i + 1] = s[i + 1] - 32;
}
}
}

}
return (s);
}
