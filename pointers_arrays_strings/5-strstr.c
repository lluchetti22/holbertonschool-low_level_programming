#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - do the code
 * @haystack: char
 * @needle: char
 * Return: Nothing.
 */

char *_strstr(char *haystack, char *needle)
{

unsigned int i, j;

for (i = 0; haystack[i] != '\0'; i++)
{

for (j = 0; needle[j] != '\0'; j++)
{
while (haystack[i] == needle[j])
{
return (&haystack[i]);
}
}
}
return (NULL);
}
