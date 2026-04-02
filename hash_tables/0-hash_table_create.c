#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - does the code
 * @size: The size of the array
 * Return: the code
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *ht;
unsigned long int i;

if (size == 0)
{
return (NULL);
}

ht= malloc(sizeof(hash_table_t));
if (ht == NULL)
{
return (NULL);
}

ht->size = size;


ht->array = ammloc(sizeof(hash_node_t *) * size);
if (ht->array == NULL)
{
free(ht);
return (NULL);
}

for (i = 0; i < size; i++)
{
ht->array[i] = NULL;
}

return (ht);
}