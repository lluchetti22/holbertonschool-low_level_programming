#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string in a newly allocated memory space
 * @s: string to duplicate
 * Return: pointer to the new string, or NULL if it fails
 */
char *_strdup(char *s)
{
char *p;
size_t len;

if (s == NULL)
return (NULL);

len = strlen(s) + 1; 
p = malloc(len);
if (p == NULL)
return (NULL);

memcpy(p, s, len); 
return (p);
}


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
int n = 0, o = 0, i;

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
