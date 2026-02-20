#include "main.h"
#include <stdio.h>

/**
 * leet - check the code
 * @s: stored char
 * Return: Always 0.
 */

char *leet(char *s)
{
int i, x;
char letters[] = "aAeEoOtTlL";
char numbers[] = "443322007711";

for (i = 0; s[i] != '\0'; i++)
{

for (x = 0; letters[x] != '\0'; x++)
{
if (s[i] == letters[x])
{
s[i] = numbers[x];
}
}
}

return (s);

}