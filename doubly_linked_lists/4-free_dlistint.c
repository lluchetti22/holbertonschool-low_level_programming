#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Prints all elements of a doubly linked dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * Return: The total number of nodes in the list.
 */

void free_dlistint(dlistint_t *head)
{

dlistint_t *temp;

while (head)
{
temp = head->next;
free(head);
head = temp;
}

}
