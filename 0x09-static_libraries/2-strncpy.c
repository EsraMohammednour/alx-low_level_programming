#include "main.h"

/**
 * *_strncpy - Function that copy two strings
 *
 * @dest: first variable pointer
 * @src: second variable pointer
 * @n: Third variable
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	while (x < n)
	{
	dest[x] = '\0';
	x++;
	}
	return (dest);
}
