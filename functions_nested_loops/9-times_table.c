#include "main.h"

/**
 * times_table - check the code
 *
 * Return: Always 0.
 */

void times_table(void)
{

int x, y, table;

for (x = 0; x <= 9; x++)
{

for (y = 0; y <= 9; y++)
{

table = x * y;

if (y == 0)
{
_putchar('0' + table);
}
else
{

_putchar(',');
_putchar(' ');

if (table < 10)
{

_putchar(' ');
_putchar('0' + table);

}
else
{

_putchar('0' + (table / 10));
_putchar('0' + (table % 10));

}
}
}
_putchar('\n');
}
}
