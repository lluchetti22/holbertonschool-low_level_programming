#include <stdio.h>
#include "main.h"

/**
* _isalpha - print numbers
* @c: a int
* Return: 0
*/

int _isalpha(int c)
{

if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
return (1);
}
else
{
return (0);
}

}
