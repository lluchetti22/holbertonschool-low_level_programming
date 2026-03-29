#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Prints all elements of a doubly linked dlistint_t.
 * @filename: A pointer to the head of the dlistint_t list.
 * @text_content: char
 * Return: The total number of nodes in the list.
 */

int append_text_to_file(const char *filename, char *text_content)
{

int file, i = 0, bytes;

if (filename == NULL)
{
return (-1);
}

file = open(filename, O_WRONLY | O_APPEND);
if (file == -1)
{
return (-1);
}

if (text_content != NULL)
{
while (text_content[i])
{
i++;
}

bytes = write(file, i > 0 ? text_content : "", i);
if (bytes == -1 | bytes != i)
{
close(file);
return (-1);
}
}

close(file);
return (1);
}
