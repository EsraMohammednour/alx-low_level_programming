#include "main.h"

/**
 * puts_half - Print half of string
 *
 * @str: variable pointer
 */

void puts_half(char *str)
{
	int f, h;

	f = 0;
	while (str[f] != '\0')
		f++;
	h = f / 2;
	if (f % 2 == 1)
		h++;
	while (h < f)
	{
		_putchar(str[h]);
	}
	_putchar('\n');
}
