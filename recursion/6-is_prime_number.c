#include "main.h"
#include <stdio.h>

/**
 * find_prime - check the code
 * @n: int
 * @i: int
 * Return: Always 0.
 */

int find_prime(int n, int i)
{

if (i * i > n)
{
return (1);
}

if (n % i == 0)
{
return (0);
}
return (find_prime(n, i + 1));
}

/**
 * is_prime_number - check the code
 * @n: int
 * Return: Always 0.
 */

int is_prime_number(int n)
{

if (n <= 1)
{
return (0);
}

return (find_prime(n, 2));
}
