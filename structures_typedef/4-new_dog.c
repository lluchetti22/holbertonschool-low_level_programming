#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *new_dog - do the code
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Return: Nothing.
 */

dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *d;

if (name  == NULL || owner == NULL)
{
return (NULL);
}

d = malloc(sizeof(dog_t));
if(d == NULL)
{
return (NULL);
}

d->name = strdup(name);
if (d->name == NULL)
{
free(d);
return (NULL);
}

d->owner = strdup(owner);
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}

d->age = age;

return (d);
}
