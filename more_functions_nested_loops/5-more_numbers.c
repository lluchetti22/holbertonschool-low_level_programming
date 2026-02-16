#include "main.h"
#include <stdio.h>

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
int i, x;

for (i = 0 ; i < 10; i++)
{

for (x = 0; x <= 14; x++)
{
if (x > 9)
{
_putchar((x / 10) + '0');
}
_putchar((x % 10) + '0');

}
_putchar('\n');

}

}
