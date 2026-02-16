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

while (s[length] != '\0')
{
length++;
}

for (length--; length >= 0; length--)
{
_putcher(s[length]);
}

_putchar('\n');
}
