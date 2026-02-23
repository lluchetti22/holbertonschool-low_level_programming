#include "main.h"
#include <stdio.h>

/**
 * _strchr - do the code
 * @s: char
 * @c: char
 * Return: Nothing.
 */

char *_strchr(char *s, char c)
{

while (*s != '\0')
{

if (*s == c)
{
return (s);
}
s++;
}

if (c == '\0')
{
return (s);
}

return (NULL);
}
