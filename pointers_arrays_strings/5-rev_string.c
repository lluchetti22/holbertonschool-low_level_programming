#include "main.h"
#include <stdio.h>

/**
 * print_rev - check the code
 * @s: stored string
 * Return: Always 0.
 */

void rev_string(char *s)
{

int length = 0;
int i;
char temp;

while (s[length] != '\0')
{
length++;
}

for (i = 0; i < length/2; i++)
{

temp = s[i];
s[i] = s[length - 1 - i];
s[length - 1 - i] = temp;

}

}
