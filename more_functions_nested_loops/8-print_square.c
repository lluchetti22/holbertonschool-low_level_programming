#include "main.h"
#include <stdio.h>

/**
 * print_square - check the code
 * @size: int
 * Return: Always 0.
 */

void print_square(int size)
{

int i;

if (size <= 0)
{
_putchar('\n');
}

for (i = 0; i < size; i++)
{
int x;

for (x = 0; x < size; x++)
{
_putchar('#');

}
_putchar('\n');

}
}