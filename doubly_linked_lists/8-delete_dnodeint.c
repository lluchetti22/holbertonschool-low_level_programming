#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Prints all elements of a doubly linked dlistint_t
 * @h: A pointer to the head of the dlistint_t list.
 * @index: A pointer to the head of the dlistint_t list.
 * Return: The total number of nodes in the list.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

dlistint_t *temp = *head;
unsigned int i = 0;

if (head == NULL || *head == NULL)
{
return (-1);
}
while (temp != NULL && i < index)
{
temp = temp->next;
i++;
}

if (temp == NULL)
{
return (-1);
}

if (temp == *head)
{
*head = temp->next;
if (*head != NULL)
{
(*head)->prev = NULL;
}

}
else
{
/* 4. Link the previous node to the next node */
temp->prev->next = temp->next;
if (temp->next != NULL)
{
temp->next->prev = temp->prev;
}
}

free(temp);
return (1);
}
