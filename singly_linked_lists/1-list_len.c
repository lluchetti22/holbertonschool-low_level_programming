#include "lists.h"
#include <stdio.h>

/**
 * list_len - singly linked list
 * @h: string
 * Return: singly linked list node structure
 */

size_t list_len(const list_t *h)
{

size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;

}

return (count);

}
