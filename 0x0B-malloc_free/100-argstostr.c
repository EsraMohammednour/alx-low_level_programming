#include "main.h"
/**
 * argstostr - Function that concatenates all the arguments
 * @ac: arguments
 * @av: char array
 * Return: char value
 */
char *argstostr(int ac, char **av)
{
	int i, j, l = 0;
	int n = 0;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
		return (0);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			l++;
		}
	l += ac;
	}
	p = malloc(sizeof(char) * l + 1);
	if (p == 0)
	{
		return (NULL);
		return (0);
	}
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	{
		p[n] = av[i][j];
		n++;
	}
	if (p[n] == '\0')
	{
		p[n++] = '\n';
	}
	}
	return (p);
}
