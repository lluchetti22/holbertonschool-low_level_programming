#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - do the code
 * @nmemb: int
 * @size: int
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

char *ptr;
unsigned int total, i;

/* Return NULL if either is 0 */
if (nmemb == 0 || size == 0)
{
return (NULL);
}

/* Calculates total memory needed*/
total = nmemb * size;

/* Allocate memory */
ptr = malloc(total);

/* Returns NULL if malloc fails */
if (ptr == NULL)
{
return (NULL);
}

for (i = 0; i < total; i++)
{
ptr[i] = 0;
}

return ((void *)ptr);
}
