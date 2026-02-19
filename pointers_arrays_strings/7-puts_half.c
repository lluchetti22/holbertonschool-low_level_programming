#include "main.h"
#include <stdio.h>

/**
 * puts_half - check the code
 * @str: stored string
 * Return: Always 0.
 */

void puts_half(char *str)
{

int length = 0;
int i, n;

while (str[length] != '\0')
{
length++;
}

n = (length + 1) / 2;

for (i = n; i < length; i++)
{

_putchar(str[i]);

}

_putchar('\n');

}
