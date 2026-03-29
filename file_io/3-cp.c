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
int f_f, f_t, r, w;
char buf[1024];

if (argc != 3)
{
dprintf(2, "Usage: cp file_from file_to\n"), exit(97);
}
f_f = open(argv[1], O_RDONLY);
if (f_f == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
}
f_t = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (f_t == -1)
{
dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
}
while ((r = read(f_f, buf, 1024)) > 0)
{
w = write(f_t, buf, r);
if (w == -1 || w != r)
dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
}
if (r == -1)
dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
if (close(f_f) == -1)
dprintf(2, "Error: Can't close fd %d\n", f_f), exit(100);
if (close(f_t) == -1)
dprintf(2, "Error: Can't close fd %d\n", f_t), exit(100);
return (0);
}
