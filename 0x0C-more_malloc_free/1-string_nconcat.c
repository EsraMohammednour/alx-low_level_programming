#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: Destination char array 1
 * @s2: Source char array 2
 * @n: int number
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ncon;
	size_t l, l1, l2;
	size_t i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	l1 = strlen(s1);
	l2 = strlen(s2);
	l = l1 + l2;
	ncon = malloc((l + 1) * sizeof(char));
		if (ncon == NULL)
		{
			return (NULL);
		}
	for (i = 0; i < l1; i++)
	{
		ncon[i] = s1[i];
	}
	for (j = 0; j < n && j < l2; j++)
	{
		if (n >= l2)
		{
			n = l2;
		}
		ncon[i] = s2[j];
			i++;
	}
	ncon[i] = '\0';
	return (ncon);
}
