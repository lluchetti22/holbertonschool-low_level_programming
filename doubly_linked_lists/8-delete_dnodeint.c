#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Prints all elements of a doubly linked dlistint_t
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: A pointer to the head of the dlistint_t list.
 * @n: A pointer to the head of the dlistint_t list.
 * Return: The total number of nodes in the list.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	/* 1. Locate the node at the specified index */
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	/* 2. If index is out of bounds */
	if (temp == NULL)
		return (-1);

	/* 3. If deleting the head node */
	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
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
