#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - Prints all elements of a doubly linked dlistint_t.
 * @head: A pointer to the head of the dlistint_t list.
 * Return: The total number of nodes in the list.
 */

int sum_dlistint(dlistint_t *head)
{

int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}

return (sum);
}
