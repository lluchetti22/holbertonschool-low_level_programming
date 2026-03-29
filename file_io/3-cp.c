#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - copies the content of a file to another file
 * @ac: argument count
 * @av: argument vector
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int f_f, f_t, r, w;
	char buf[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	f_f = open(av[1], O_RDONLY);
	if (f_f < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	f_t = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f_t < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while ((r = read(f_f, buf, 1024)) > 0)
	{
		w = write(f_t, buf, r);
		if (w != r)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	if (r < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (close(f_f) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_f), exit(100);
	if (close(f_t) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_t), exit(100);
	return (0);
}
