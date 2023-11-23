#include "main.h"

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int
 * @b: string
 * Return: unsigned int value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	
	if (b == NULL)
	return (0);
	while (*b)
	{
		if (*b == '0')
		n <<= 1;
		else if (*b == '1')
		n <<= 1;
		n |= 1;
	else
		return (0);
	b++;
	}
	return (n);
}
