#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - do the code
 * @array: int
 * @size: int
 * @cmp: int
 * Return: Nothing.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

/* Checks to see if elements match and size is > 0*/
if (size <= 0 || array == NULL || cmp == NULL)
{
return (-1);
}

for (i = 0; i < size; i++)
{

/* compares the current element*/
if (cmp(array[i]) != 0)
{
return (i);
}

}

return (-1);
}
