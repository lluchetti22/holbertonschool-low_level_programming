#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - do the code
 * @d: int
 * @name: int
 * @age: int
 * @owner: int
 * Return: Nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}

}
