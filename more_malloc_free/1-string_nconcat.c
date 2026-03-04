#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - do the code
 * @b: int
 * Return: Nothing.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

char *link;
unsigned int len1 = 0, len2 = 0, x, y;

if (s1 = NULL)
{
s1 = "";
}

if (s2 = NULL)
{
s2 = "";
}

while (s1[len1])
{
len1++;
}

while (s2[len2])
{
len2++;
}

if (n >= len2)
{
n = len2;
}

link = malloc(sizeof(char) * (len1 + n + 1));

if (link == NULL)
{
return (NULL);
}

for (x = 0; x < len1; x++)
{
link[x] = s1[x];
}

for (y = 0; y < n; y++, x++)
{
link[x] = s2[y];
}

link[x] = '\0';

return (link);
}
