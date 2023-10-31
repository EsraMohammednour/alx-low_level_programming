#include <stdlib.h>
#include "main.h"

/**
 * word_count - Count the words in  the string
 *
 * @s: string 
 *
 * Return: int
 */

int word_count(char *s)
{
	int c, i, j;

	c = 0;
	j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			c = 0;
		else if (c == 0)
		{
			c = 1;
			j++;
		}
	}

	return (j);
}

/**
 * strtow - function that splits a string into words
 *
 * @str: string
 *
 * Return: pointer
 */

char **strtow(char *str)
{
	char **p, *m;
	int i, j = 0, len = 0, w, d = 0, f, l;

	while (*(str + len))
		len++;
	w = word_count(str);
	if (w == 0)
		return (NULL);

	p = (char **) malloc(sizeof(char *) * (w + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (d)
			{
				l = i;
				m = (char *) malloc(sizeof(char) * (d + 1));
				if (m == NULL)
					return (NULL);
				while (f < l)
					*m++ = str[f++];
				*m = '\0';
				p[j] = m - d;
				j++;
				d = 0;
			}
		}
		else if (d++ == 0)
			f = i;
	}

	p[j] = NULL;

	return (p);
}
