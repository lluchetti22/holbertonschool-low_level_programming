#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - Prints all elements of a doubly linked dlistint_t.
 * @filename: A pointer to the head of the dlistint_t list.
 * @letters: int
 * Return: The total number of nodes in the list.
 */

int create_file(const char *filename, char *text_content)
{

int file, i = 0, bytes;

if (filename == NULL)
{
return (-1);
}

/* 
* O_CREAT: Create if it doesn't exist
* O_WRONLY: Open for writing
* O_TRUNC: Truncate to length 0 if it exists
* 0600: Permissions rw-------
*/
file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (file == -1)
{
return (-1);
}

if (text_content != NULL)
{
/* Calculate length of text_content */
while (text_content[i])
{
i++;
}

/* Write content to file */
bytes = write(file, text_content, i);
if (bytes == -1 || bytes != 1)
{
close(file);
return (-1);
}
}

close(file);
return (1);
}