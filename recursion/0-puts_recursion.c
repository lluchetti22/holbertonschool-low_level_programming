#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - check the code
 * @s: char
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
unsigned int i;

for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}
}