#include "main.h"
#include <stdio.h>

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
int i;

for (i = '48' ; i < '59'; i++)
{

if (!(i == '50' || i == '52'))
{
_putchar(i);
}

}

_putchar('\n');

}