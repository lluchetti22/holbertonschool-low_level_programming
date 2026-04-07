#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - does the code
 * @key: char
 * @value: char
 * @ht: table
 * Return: the code
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node, *temp;
char *value_copy;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
{
return (0);
}

if (value_copy == NULL)
{
return (0);
}

index = key_index((const unsigned char *)key, ht->size);

temp = ht->array[index];
while (temp)
{
if (strcmp(temp->key, key) == 0)
{
free(temp->value);
temp->value = value_copy;
return (1);
}
temp = temp->next;
}

new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
{
free(value_copy);
return (0);
}

new_node->key = strdup(key);
if (new_node->key == NULL)
{
free(value_copy);
free(new_node);
return (0);
}

new_node->value = value_copy;
new_node->next = ht->array[index];
ht->array[index] = new_node; 

return (1);
}

