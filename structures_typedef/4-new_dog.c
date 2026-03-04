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
char *nam, *own;

d = malloc(sizeof(dog_t));
if(d == NULL)
{
return (NULL);
}

nam = malloc(strlen(name) + 1);
if (nam == NULL)
{
free(d);
return (NULL);
}

own = malloc(strlen(owner) + 1);
if (own == NULL)
{
free(nam);
free(d);
return (NULL);
}

d->name = nam;
d->age = age;
d->owner = own;

return (d);
}
