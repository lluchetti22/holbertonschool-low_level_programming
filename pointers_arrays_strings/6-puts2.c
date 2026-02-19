#include "main.h"
#include <stdio.h>

/**
 * puts2 - check the code
 * @str: stored string
 * Return: Always 0.
 */

void puts2(char *str)
{

int i;

for (i = 0; str[i] != '\0'; i += 2)
{

_putchar(str[i]);

if (str[i + 1] == '\0')
{
break;
}

}

_putchar('\n');

}
