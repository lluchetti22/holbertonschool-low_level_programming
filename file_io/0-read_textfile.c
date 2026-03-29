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

ssize_t read_textfile(const char *filename, size_t letters)
{
int file;
ssize_t bytes_read, bytes_written;
char *buffer;

if (filename == NULL)
{
return (0);
}

file = open(filename, O_RDONLY);
if (file == -1)
{
return (0);
}

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(file);
return (0);
}

bytes_read = read(file, buffer, letters);
if (bytes_read == -1)
{
free(buffer);
close(file);
return (0);
}

bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

free(buffer);
close(file);

if (bytes_written == -1 || bytes_written != bytes_read)
{
return (0);
}

return (bytes_written);
}
