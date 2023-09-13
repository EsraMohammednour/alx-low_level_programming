#include "main.h"
/**
 * print_alphabet_x10 - Print alphabet 10 times
 *
 * Description: Function to print_alphabet
*/

void print_alphabet_x10(void)
{
	char i;
	int a;

	a = 0;
	while (a <= 9)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		a++;
	}
}


