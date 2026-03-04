#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - do the code
 * @min: int
 * @max: int
 * Return: Nothing.
 */

int *array_range(int min, int max)
{

int *array;
int i, size;

/* Return NULL if min is > max */
if (min > max)
{
return (NULL);
}

/* calc number of elements needed */
size = max - min + 1;

/* allocate memory*/
array = malloc(sizeof(int) * size);

/* returns NULL if malloc fails */
if (array == NULL)
{
return (NULL);
}

/* fills array with values from min to max */
for (i = 0; i < size; i++)
{
array[i] = min++;
}

return (array);
}
