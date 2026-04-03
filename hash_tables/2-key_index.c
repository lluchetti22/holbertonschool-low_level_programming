#include "hash_tables.h"
#include <stdlib.h>

/**
 * key_index - does the code
 * @key: The size of the array
 * @size: int
 * Return: the code
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash;

hash = hash_djb2(key);

return (hash % size);
}
