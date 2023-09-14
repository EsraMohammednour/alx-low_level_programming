#include "main.h"

/**
 * more_numbers - Print more numbers
 *
 * _putchar -  Print number
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			c = b;
			if (b > 9)
			{
				_putchar(1 + '0');
				c = c % 10;
			}
		_putchar(c + '0');
		}
	_putchar('\n');
	}
}
