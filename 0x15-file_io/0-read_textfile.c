#include "main.h"
#define BUFFER_SIZE 1024

/**
 * read_textfile - Function that reads a text file and prints
 *	it to the POSIX standard output
 * @filename:It is tne name of the file
 * @letters: unsigned int value
 * Return: int value
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	char buffer[BUFFER_SIZE * 8];
	ssize_t x;

	if (filename == NULL || !letters)
	return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
	return (0);
	x = read(of, &buffer, letters);
	x = write(STDOUT_FILENO, &buffer, x);

	close(f);
	return (x);
}
