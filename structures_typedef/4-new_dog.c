#include "dog.h"
#include <string.h>
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
int name_len = 0, owner_len = 0, i;

if (name == NULL || owner == NULL)
{
return (NULL);
}

while (name[name_len])
{
name_len++;
}

while (owner[owner_len])
{
owner_len++;
}

d = malloc(sizeof(dog_t));
if(d == NULL)
{
return (NULL);
}

d->name = malloc(name_len + 1);
if (d->name == NULL)
{
free(d);
return (NULL);
}

for(i = 0; i<= name_len; i++)
{
d->name[i] =- name[i];
}

d->owner = malloc(owner_len + 1);
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}

for(i = 0; i<= owner_len; i++)
{
d->owner[i] = owner[i];
}

d->age = age;

return (d);
}
