#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Prints all elements of a doubly linked dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: A pointer to the head of the dlistint_t list.
 * Return: The total number of nodes in the list.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

dlistint_t *new_node;

if (head == NULL)
{
return (NULL);
}

/* Memory allocation */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}

/* Initialising new node */
new_node->n = n;
new_node->prev = NULL;
new_node->next = *head;

/* Updating the old head's prev pointer if list isn't empty */
if (*head != NULL)
{
(*head)->prev = new_node;
}

/* Pointing the head to the new node */
*head = new_node;

return (new_node);
}
