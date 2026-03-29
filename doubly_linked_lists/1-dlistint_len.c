#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - Prints all elements of a doubly linked dlistint_t list.
 * @h: A pointer to the head of the dlistint_t list.
 * Return: The total number of nodes in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{

size_t nodes = 0;

while (h)
{
nodes++;
h = h->next;
}

return (nodes);
}
