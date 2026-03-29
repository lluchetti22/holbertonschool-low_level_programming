#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Prints all elements of a doubly linked dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: A pointer to the head of the dlistint_t list.
 * Return: The total number of nodes in the list.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

dlistint_t *new_node, *last;

if (head == NULL)
{
return (NULL);
}

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
return (new_node);
}

last = *head;
while (last->next != NULL)
{
last = last->next;
}

last->next = new_node;
new_node->prev = last;

return (new_node);
}
