#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * get_dnodeint_at_index - Prints all elements of a doubly linked dlistint_t.
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

/* 1. Open the file */
file = open(filename, O_RDONLY);
if (file == -1)
{
return (0);
}

/* 2. Allocate buffer memory */
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(file);
return (0);
}

/* 3. Read from file */
bytes_read = read(file, buffer, letters);
if (bytes_read == -1)
{
free(buffer);
close(file);
return (0);
}

/* 4. Write to STDOUT (file descriptor 1) */
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

/* 5. Cleanup and validation */
free(buffer);
close(file);

if (bytes_written == -1 || bytes_written != bytes_read)
{
return (0);
}

return (bytes_written);
}
