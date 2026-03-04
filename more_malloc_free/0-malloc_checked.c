#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - do the code
 * @b: int
 * Return: Nothing.
 */

void *malloc_checked(unsigned int b)
{

void *ptr;

/* Allocates memory for b */
ptr = malloc(b);

/* checks if amlloc was successful */
if (ptr == NULL)
{
/*ends process with status value of 98*/
exit(98);
}

return(ptr);

}
