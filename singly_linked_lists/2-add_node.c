#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - singly linked list
 * @head: string
 * @str: char
 * Return: singly linked list node structure
 */

list_t *add_node(list_t **head, const char *str)
{

list_t *new_node;
unsigned int length;

/* Creating a new node */
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}

/* Duplicating the string */
new_node->str = strdup(str);
if(new_node->str == NULL)
{
free(new_node);
return (NULL);
}

/* gets the length of the string */
while (str[length])
{
length++;
}

new_node->len = length;

/* sets next pointer to the current head */
new_node->next = *head;

/* points the updated head to the new node */
*head = new_node;

return (new_node);
}
