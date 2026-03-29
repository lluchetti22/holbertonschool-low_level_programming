#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - Prints all elements of a doubly linked dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @index: int
 * Return: The total number of nodes in the list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
while (head != NULL)
{
if (i == index)
{
return (head);
}
head = head->next;
i++;
}
return (NULL);
}
