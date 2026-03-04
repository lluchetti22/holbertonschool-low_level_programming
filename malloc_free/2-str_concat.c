#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - do the code
 * @s1: int
 * @s2: char
 * Return: Nothing.
 */

char *str_concat(char *s1, char *s2)
{

char *link;
unsigned int len1 = 0, len2 = 0, i, x;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[len1])
len1++;

while (s2[len2])
len2++;

link = malloc(sizeof(char) * (len1 + len2 + 1));

if (link == NULL)
return (NULL);

for (i = 0; i < len1; i++)
link[i] = s1[i];

for (x = 0; x < len2; x++, i++)
link [i] = s2[x];

link[i] = '\0';

return (link);
}
