#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - check the code
 * @n: int
 * @separator: char
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;

va_start(ap, n);


for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));

if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}

printf("\n");
va_end(ap);
}
