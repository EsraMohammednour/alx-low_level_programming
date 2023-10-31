#include "main.h"

/**
 * _strdup - copy
 * @str: char varible
 * Return: char array value
 */
char *_strdup(char *str)
{
	char *co;
	unsigned int size, i;

	if (str == NULL)
	{
		return (NULL);
	}
	size = strlen(str) + 1;
	co = (char *)malloc(size * sizeof(char));
	if (co == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		co[i] = str[i];
	}
	return (co);
}
