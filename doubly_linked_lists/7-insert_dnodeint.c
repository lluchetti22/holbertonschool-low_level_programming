#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - Prints all elements of a doubly linked dlistint_t.
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: A pointer to the head of the dlistint_t list.
 * @n: A pointer to the head of the dlistint_t list.
 * Return: The total number of nodes in the list.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

dlistint_t *new_node, *temp = *h;
unsigned int i = 0;

/* 1. Handle insertion at the beginning (index 0) */
if (idx == 0)
{
return (add_dnodeint(h, n));
}

/* 2. Traverse to the node currently at idx - 1 */
while (temp != NULL && i < (idx - 1))
{
temp = temp->next;
i++;
}

/* 3. If index is out of bounds */
if (temp == NULL)
{
return (NULL);
}

/* 4. Handle insertion at the end (if temp->next is NULL) */
if (temp->next == NULL)
{
return (add_dnodeint_end(h, n));
}

/* 5. Create and link new node in the middle */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}

new_node->n = n;
new_node->next = temp->next;
new_node->prev = temp;
temp->next->prev = new_node;
temp->next = new_node;

return (new_node);
}
