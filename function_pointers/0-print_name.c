#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - do the code
 * @name: int
 * @f: int
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{

if (name && f)
{
f(name);
}

}
