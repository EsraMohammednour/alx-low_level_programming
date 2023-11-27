#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file
 * @filename: The name of the file
 * @text_content: char value
 * Return: int value
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, b = 0;

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
	return (-1);
	if (strlen(text_content))
	bytes = write(f, text_content, strlen(text_content));
	close(f);
	return (b == strlen(text_content) ? 1 : -1);
}
