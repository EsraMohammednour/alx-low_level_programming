#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: The name of the file
 * @text_content: Char value
 * Return: int value
 */
int create_file(const char *filename, char *text_content)
{
	int f, w x = 0;

	x = strlen(text_content);
	if (filename == NULL)
	return (0);
	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (f == -1)
	return (-1);
	if (text_content)
	{
		w = write(f, text_content, x);
		if (w == -1)
		return (-1);
	{
	close(f);
	return (1);
}
