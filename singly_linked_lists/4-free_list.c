#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_list - singly linked list
 * @head: header
 * Return: singly linked list node structure
 */

void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
/* saves the next node before freeing the current one */
temp = head->next;

/* free the duplicated string */
free(head->str);

/* free the node */
free(head);

/* move to the next node */
head = temp;
}
}
