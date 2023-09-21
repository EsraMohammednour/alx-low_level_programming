#include "main.h"

/**
 * *_strcat - Function that concatenates two strings
 *
 * @dest: first variable pointer
 * @src: second variable pointer
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	while (dest[x] != 0)
		x++;
	y = 0;
	while (src[y] != 0)
	{
		y++;
		dest[x++] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
