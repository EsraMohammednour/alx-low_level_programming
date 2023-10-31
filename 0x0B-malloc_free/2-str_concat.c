#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: char array 1
 * @s2: char array 2
 * Return: char value
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	unsigned int i, j, size1, size2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = strlen(s1);
	size2 = strlen(s2);
	con = (char *)malloc((size1 + size2 + 1) * sizeof(char));
	if (con == NULL)
	{
		free(con);
		return (NULL);
	}
	for (j = 0; j < size1 ; j++)
	{
		con[j] = s1[j];
	}
	 for (i = 0; i < size2; i++)
	{
		con[j] = s2[i];
		j++;
	}
	return (con);
}
