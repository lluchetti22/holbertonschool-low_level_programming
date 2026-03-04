#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - do the code
 * @str: char
 * Return: Nothing.
 */
char *_strdup(char *str)
{
char *copy;
unsigned int i, length = 0;
/*
* checking if str is null
*/
if (str == NULL)
    return (NULL);
/*
* calculating the length of the string
*/
while (str[length] != '\0')
    length++;
/*
* allocating memory (+1 to avoid null)
*/
copy = malloc(sizeof(char) * (length + 1));
/*
* checks to see the memory was allocated
*/
if (copy == NULL)
    return (NULL);
/*
* goes through the string and copies each char
*/
for (i = 0; i <= length; i++)
   copy[i] = str[i];

return (copy);
}
