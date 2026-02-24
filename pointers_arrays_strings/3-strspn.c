#include "main.h"
#include <stdio.h>

/**
 * _strchr - do the code
 * @s: char
 * @accept: char
 * Return: Nothing.
 */

unsigned int _strspn(char *s, char *accept)
{

unsigned int i, j;

/* 
* This loop goes through each character in the string
*/
for (i = 0; s[i] != '\0'; i++)
{

/*
* This loop checks to see if the characters in the string match
* the characters inside of accept 
*/
for (j = 0; accept[j] != '\0'; j++)
{

/*
* if it mataches then it breaks the loop 
*/
if (s[i] == accept[j])
{
break;
}
}

/*
* if this loop runs then that means there were no characters in 
* accept that were found in the string
*/
if (accept[j] == '\0')
{
return (i);
}
}

/*
* returns the results of the code
*/
return (i);

}
