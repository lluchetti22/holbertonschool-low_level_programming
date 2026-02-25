#include "main.h"
#include <stdio.h>

/**
 * find_sqrt - check the code
 * @n: int
 * @i: int
 * Return: Always 0.
 */

int find_sqrt(int n, int i)
{

if (i * i == n)
{
return (i);
}

if (i * i > n)
{
return (-1);
}
return (find_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - check the code
 * @n: int
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{

if (n < 0)
{
return(-1);
}

return(find_sqrt(n, 0));
}
