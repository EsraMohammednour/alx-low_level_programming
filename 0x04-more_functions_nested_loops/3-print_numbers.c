#include "main.h"

/**
 * print_numbers - Print numbers
 *
 * _putchar -  Print number
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
