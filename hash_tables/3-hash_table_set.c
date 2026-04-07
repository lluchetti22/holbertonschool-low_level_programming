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

/* Basic validation: check for NULL pointers or an empty key string */
if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);

/* Duplicate the value string as requested; return 0 if allocation fails */
value_copy = strdup(value);
if (value_copy == NULL)
return (0);


/* Use the hash function and modulo to find the correct index in the array */
index = key_index((const unsigned char *)key, ht->size);

/* Traverse the linked list at this index to see if the key already exists */
temp = ht->array[index];
while (temp)
{

/* If key is found, update the value, free the old one, and exit */
if (strcmp(temp->key, key) == 0)
{
free(temp->value);
temp->value = value_copy;
return (1);
}
temp = temp->next;
}

/* If key doesn't exist, create a new node for the hash table */
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
{
free(value_copy);
return (0);
}

/* Duplicate the key string for the new node */
new_node->key = strdup(key);
if (new_node->key == NULL)
{
free(value_copy);
free(new_node);
return (0);
}

/* Assign the duplicated value and handle the collision by prepending */
new_node->value = value_copy;
new_node->next = ht->array[index]; // New node points to current head
ht->array[index] = new_node; // New node becomes the new head
return (1);
}

