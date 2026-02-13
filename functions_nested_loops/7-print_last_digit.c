#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - check the code
 * @n: a thing
 * Return: Always 0.
 */

int print_last_digit(int n)
{

int lastdigit;
lastdigit = n % 10;

if (lastdigit < 0)
{
lastdigit *= -1;
}

_putchar(lastdigit + '0');
return (lastdigit);
}
