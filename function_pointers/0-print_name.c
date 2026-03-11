#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * init_dog - do the code
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
