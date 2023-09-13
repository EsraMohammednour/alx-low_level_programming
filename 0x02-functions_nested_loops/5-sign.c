#include "main.h"

/**
 * print_sign - Print sign
 *
 * @n: Intiger number
 *
 * Return: 1 is greater than 0 or 0 is 0 or -1 is less than 0
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
