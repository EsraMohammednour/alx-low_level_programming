#include "main.h"

/**
 * putsc - function to prints string followed by \n
 * @st: pointer
 * Return: void
 */

void putsc(char *st)
{
	int j;

	for (j = 0; st[j]; j++)
	{
		_putchar(st[j]);
	}
}

/**
 * _atoi - convert string to an integer
 * @str: string
 * Return: int
 */
int _atoi(char *str)
{
	int s = 1;
	unsigned long int r = 0, f, i;

	for (f = 0; !(str[f] >= 48 && str[f] <= 57); f++)
	{
		if (str[f] == '-')
		{
			s *= -1;
		}
	}
	for (i = f; str[i] >= 48 && str[i] <= 57; i++)
	{
		r *= 10;
		r += (str[i] - 48);
	}
	return (s * r);
}

/**
 * print_i - function that prints integer
 * @p: integer
 * Return: 0
 */
void print_i(unsigned long int p)
{
	unsigned long int d = 1, i, r;

	for (i = 0; p / d > 9; i++)
	{
		d *= 10;
	}
	for (; d >= 1; p %= d, d /= 10)
	{
		r = p / d;
		_putchar('0' + r);
	}
}

/**
 * main - print result of multiplication followed by new line
 * @argc: int
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		putsc("Error");
		exit(98);
	}
	print_i(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
