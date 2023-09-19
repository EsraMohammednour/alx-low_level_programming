#include "main.h"

/**
 * rev_string - Print a string in reverse
 *
 * @s: variable pointer
 */

void rev_string(char *s)
{
	int l, x, h;
	char t;

	for (l = 0; s[l] != '\0'; l++)
		x = 0;
	h = l / 2;
	while (h--)
	{
		t = s[l - x - 1];
		s[l - z - 1] = s[x];
		s[x] = t;
		x++;
	}
}
