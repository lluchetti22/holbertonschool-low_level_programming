#include "lists.h"
#include <stdio.h>

/**
 * print_list - singly linked list
 * @h: string
 * Return: singly linked list node structure
 */

size_t print_list(const list_t *h)
{
/* Keeps track of the total number of nodes */
size_t count = 0;

/* Iterate through the linked list until the end (NULL) */
while (h != NULL)
{

/* If the string within the node is NULL, print specific format */
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
/* Print the length of the string and the string itself */
printf("[%u] %s\n", h->len, h->str);
}

/* Move to the next node in the list */
h = h->next;

count++;
}

/* Return the total count of nodes processed */
return (count);
}
