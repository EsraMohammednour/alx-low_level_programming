#include "main.h"


int create_file(const char *filename, char *text_content)
{
	int f, w;

	if (filename == NULL)
	return (0);
	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (f == -1)
	return (-1);
	if (text_content)
	{
		w = write(fd, text_content, strlen(text_content));
		if (w == -1)
		return (-1);
	{
	close(f);
	return (1);
}
