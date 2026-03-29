#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int f_f, f_t, r, w, fd[2];
char buf[1024];

	if (argc != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);
	f_f = open(argv[1], O_RDONLY);
	if (f_f < 0)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	f_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f_t < 0)
		dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((r = read(f_f, buf, 1024)) > 0)
	{
		w = write(f_t, buf, r);
		if (w != r)
			dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (r < 0)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	fd[0] = f_f, fd[1] = f_t;
	for (r = 0; r < 2; r++)
		if (close(fd[r]) < 0)
			dprintf(2, "Error: Can't close fd %d\n", fd[r]), exit(100);
	return (0);
}

