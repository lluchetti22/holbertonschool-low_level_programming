#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_dog - do the code
 * @d: First member
 * Return: Nothing.
 */

void free_dog(dog_t *d)
{

if (d == NULL)
{
return;
}

if (d->name)
{
free(d->name);
}

if (d->owner)
{
free(d->owner);
}

free(d);
}
