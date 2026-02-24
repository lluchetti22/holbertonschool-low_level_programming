#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - do the code
 * @s: char
 * @accept: char
 * Return: Nothing.
 */

char *_strpbrk(char *s, char *accept)
{

unsigned int i, j;
/*
* Goes through each character in the string
*/
for(i = 0; s[i] != '\0'; i++)
{

/*
* finds the first instant of the character in accept in string s
*/
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (i);
}
}
}

return (NULL);
}
