#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints all elements of a doubly linked dlistint_t list.
 * @h: A pointer to the head of the dlistint_t list.
 * Return: The total number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{

size_t nodes = 0;

while(h)
{
printf("%d\n", h->n);
h = h->next;
nodes++;
}

return (nodes);
}