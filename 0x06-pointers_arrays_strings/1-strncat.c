#include "main.h"

/**
 * *_strncat - Function that concatenates two strings using n bytes
 *
 * @dest: first variable pointer
 * @src: second variable pointer
 * @n: Third variable
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	while (dest[x] != '\0')
		x++;
	y = 0;
	for (;y < n && src[y] != '\0';)
	{
		y++;
		dest[x++] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
