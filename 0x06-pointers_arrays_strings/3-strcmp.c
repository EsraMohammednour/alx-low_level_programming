#include "main.h"

/**
 *  _strcmp - function that compares two strings
 *
 *  @s1: variable pointer
 *  @s2: variable pointer
 *
 *  Return: 1 if true , 0 if false
 */

int _strcmp(char *s1, char *s2)
{
	int x, y;

	for (x = 0; s1[x] == s2[x] && s1[x] != '\0'; x++)
	y = s1[x] - s2[x];
	return (y);
}
