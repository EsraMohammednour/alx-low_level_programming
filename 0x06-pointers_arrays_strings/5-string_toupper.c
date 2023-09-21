#include "main.h"

/**
 * string_toupper - function that changes lowercase letters to uppercase
 *
 * @x: pinter to string
 *
 * Return: pointer to uppercase string
 */

char *string_toupper(char *x)
{
	int y;

	y = 0;
	while (x[y] != '\0')
	{
		if (x[y] >= 97 && x[y] <= 122)
		{
			x[y] = x[y] - 32;
		}
		y++;
	}
	return (x);
}
