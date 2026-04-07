#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_delete - does the code
 * @ht: table
 * Return: the code
 */

void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *node, *temp;

if (ht == NULL)
{
return;
}

for (i = 0; i < ht->size; i++)
{
node = ht->array[i];

while (node != NULL)
{
temp = node->next;

free(node->key);
free(node->value);

free(node);

node = temp;
}
}

free(ht->array);
free(ht);
}

