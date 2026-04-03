#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_djb2 - does the code
 * @str: The size of the array
 * Return: the code
 */

unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash = 5381;
int c;

while ((c = *str++))
{
hash = ((hash << 5)+ hash) + c;
}

return (hash);
}
