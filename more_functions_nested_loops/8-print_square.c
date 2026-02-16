#include "main.h"
#include <stdio.h>

/**
 * print_square - check the code
 * @size: int
 * Return: Always 0.
 */

void print_square(int size)
{

if (size <= 0)
{
_putchar('\n');
}

int i, x;

for (i = 0 ; i < size; i++)
{

for (x = 0; x < i; x++)
{
_putchar('#');

}
_putchar('\n');

}
}