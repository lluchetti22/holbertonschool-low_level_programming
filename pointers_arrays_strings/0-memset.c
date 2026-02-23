#include "main.h"
#include <stdio.h>

/**
 * _memset - do the code
 * @s: char
 * @b: char
 * @n: int
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{

int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
