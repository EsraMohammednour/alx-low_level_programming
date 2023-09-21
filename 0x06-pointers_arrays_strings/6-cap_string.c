i#include "main.h"

/**
 * cap_string - function that changes lowercase letters to uppercase
 *
 * @x: pinter to string
 *
 * Return: pointer to uppercase string
 */

char *cap_string(char *x);
{
	int y;

	y = 0;
	while (x[y] != '\0')
	{
		if (x[0] >= 97 && x[0] <= 122)
		{
			x[0] = x[0] - 32;
		}
		if (x[y] == ' ' || x[y] == '\t' || x[y] == '\n' x[y] == ','
			|| x[y] == ';' || x[y] == '.' || x[y] == '!'
			|| x[y] == '?' || x[y] == '"' || x[y] == '('
			|| x[y] == ')' || x[y] == '{' || x[y] == '}')
		{
			if (x[y + 1] >= 97 && x[y + 1] <= 122)
			{
				x[y + 1] = x[y + 1] - 32;
			}
		}
		y++;
	}
	return (x);
}
