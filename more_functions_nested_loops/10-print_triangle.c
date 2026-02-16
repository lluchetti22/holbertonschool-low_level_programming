#include "main.h"
#include <stdio.h>

/**
 * print_triangle - check the code
 * @size: int
 * Return: Always 0.
 */

void print_triangle(int size)
{

if (size <= 0)
{
_putchar('\n');
}
else
{
int x, y;

for (x = 0; x <= size; x++)
{

for (y = 1; y <= (size - x); y++)
{
_putchar(' ');
}

for (; y <= size; y++)
{
_putchar('#');
}

_putchar('\n');
}
}

}
