#include "main.h"

/**
 * _strlen - Length of a string
 *
 * @s: integer pointer
 *
 * Return : c
 */
 
int _strlen(char *s)
{
	int c = 0;
	while (*s !='\n')
	{
		c++;
		s++;
	}
	return c;
}
