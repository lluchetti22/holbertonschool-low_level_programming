#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - check the code
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{

if (!(i == 2 || i == 4))
{
_putchar(i);
}

}

_putchar('\n');

}