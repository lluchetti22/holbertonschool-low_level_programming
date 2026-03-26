#include "lists.h"
#include <string.h>
#include <stdlib.h>


/**
 * add_node_end - singly linked list
 * @head: header
 * @str: char
 * Return: singly linked list node structure
 */

list_t *add_node_end(list_t **head, const char *str)
{

list_t *node;
list_t *current;

/* allocates memory for a new node*/
node = malloc(sizeof(list_t));
if (node == NULL)
{
return (NULL);
}

/* Duplicates the string */
node->str = strdup(str);
if (node->str == NULL)
{
free(node);
return (NULL);
}

/* Calc the length of the string and checks for NULL */
node->len = strlen(str);
node->next = NULL;

/* if list is empty make node the head */
if(*head == NULL)
{
*head = node;
}
else
{
current = *head;
while (current->next != NULL)
{
current = current->next;
}

current->next = node;
}

return (node);
}
