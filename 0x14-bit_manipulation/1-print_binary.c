#include "main.h"

/**
 * print_binary - Function that prints the binary representation of a number
 * @n: unsigned int value
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	char x;

	if (n > 1)
	print_binary(n >> 1);
	x = (n & 1) ? '1' : '0';
	write(1, &x, 1);
}
