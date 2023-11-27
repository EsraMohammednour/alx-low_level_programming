#include "main.h"

/**
 * main -  program that copies the content of a file to another file
 * @argc: number of argument
 * @argv: array
 * Return:int valve
 */
int main(int argc, char **argv)
{
	int f, d, c, h, e, k;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	f = open(argv[1], O_RDONLY);
	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	d = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (d == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((c = read(f, buffer, 1024)) > 0)
	{
		h = write(d, buffer, c);
		if (h != c)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	e = close(f);
	if (e == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f), exit(100);
	k = close(d);
	if (k == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d), exit(100);
	return (0);
}
