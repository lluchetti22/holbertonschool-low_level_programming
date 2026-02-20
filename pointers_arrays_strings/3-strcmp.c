#include "main.h"
#include <stdio.h>

/**
 * _strncpy - check the code
 * @s1: char
 * @s2: char
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] != '\0' && s1[i] == s2[i])
{
i++;
}

return (s1[i] - s2[i]);
}

