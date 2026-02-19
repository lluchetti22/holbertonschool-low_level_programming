#include "main.h"
#include <stdio.h>

/**
 * print_rev - check the code
 * @s: stored string
 * Return: Always 0.
 */

void print_rev(char *s)
{

int length = 0;
int i;

while (s[length] != '\0')
{
length++;
}

for (i = length; i >= 0; i--)
{
_putcher(s[i]);
}

_putchar('\n');
}
