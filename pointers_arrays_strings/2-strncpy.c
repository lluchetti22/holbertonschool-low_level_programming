#include "main.h"
#include <stdio.h>

/**
 * _strncat - check the code
 * @dest: char
 * @src: char
 * @n: int
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
char *ptr = dest;
int i =0;

while (i < n && src != '\0')
{
*ptr = *src;
ptr++;
src++;
i++;
}

while (i < n)
{
*ptr = '\0';
ptr++;
i++;
}

return (dest);
}
