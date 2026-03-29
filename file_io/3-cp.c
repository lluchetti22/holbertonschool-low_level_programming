#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - Copies the content of one file to another.
 * @argc: Number of arguments.
 * @argv: Array of argument strings.
 * Return: 0 on success, or exits with specific codes on failure.
 */

int main(int argc, char *argv[])
{
int file_from, file_to;
ssize_t n_read, n_written;
char buffer[1024];

/* 1. Validate argument count */
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

/* 2. Open source file (must exist and be readable) */
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

/* 3. Open destination file (create with rw-rw-r-- or truncate) */
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(file_from);
exit(99);
}

/* 4. Copy loop: read 1024 bytes at a time */
while ((n_read = read(file_from, buffer, 1024)) > 0)
{
n_written = write(file_to, buffer, n_read);
if (n_written == -1 || n_written != n_read)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}

/* Check for read errors */
if (n_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

/* 5. Close file descriptors and handle errors */
if (close(file_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
if (close(file_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
exit(100);
}

return (0);
}
