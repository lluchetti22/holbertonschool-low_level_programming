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
int i;

while (str[length] != '\0')
{
length++;
}


if (length % 2 != 0)
{
length++;
}

for (i = length / 2; i < length; i++)
{

_putchar(str[i]);

}

_putchar('\n');

}
