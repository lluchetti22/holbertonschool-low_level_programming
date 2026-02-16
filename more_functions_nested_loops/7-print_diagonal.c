#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - check the code
 * @n: int
 * Return: Always 0.
 */

void print_diagonal(int n)
{

while (n > 0)
{
_putchar(' ');
n--;
}
if (n > 0)
{
_putchar('\\');
}
_putchar('\n');
}
