#include "main.h"
#include <stdio.h>

/**
 * _strcat - check the code
 * @dest: char
 * @src: char
 * @n: int
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;
int i = 0;

while (*ptr != '\0')
{
ptr++;
}

while (i < n && *src != '\0')
{
*ptr = *src;
ptr++;
src++;
i++;
}

*ptr = '\0';

return (dest);
}
