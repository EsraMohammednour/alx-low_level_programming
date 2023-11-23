#include "main.h"

/**
 * flip_bits - Function that returns the number of bits
 *	you would need to flip to get from one number to another
 * @n: unsigned long int value
 * @m: unsigned long int value
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int y = n ^ m;
	int x = 0;

	while (y > 0)
	{
		x += y & 1;
		y >>= 1;
	}
	return (x);
}
