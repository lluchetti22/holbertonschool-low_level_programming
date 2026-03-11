#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - do the code
 * @array: int
 * @size: int
 * @action: int
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

size_t i;

if (array != NULL && action != NULL)
{

for (i = 0; i <= size; i++)
{
action(array[i]);
}

}
}
