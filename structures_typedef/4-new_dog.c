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

/* Check for valid inputs */
if (name == NULL || owner == NULL)
return (NULL);

/* finds the length of name */
while (name[name_len])
name_len++;

/* Finds the length of owner */
while (owner[owner_len])
owner_len++;

/* Allocates some memory for the dog */
d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);

/* Allocate memory for the name */
d->name = malloc(name_len + 1);
if (d->name == NULL)
{
free(d);
return (NULL);
}

/* Manually copy name into the new memory buffer */
for (i = 0; i <= name_len; i++)
d->name[i] = name[i];

/* Allocate memory for the owner */
d->owner = malloc(owner_len + 1);
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}

/* Manually copy owner into the new memory buffer */
for (i = 0; i <= owner_len; i++)
d->owner[i] = owner[i];

d->age = age;

return (d);
}
