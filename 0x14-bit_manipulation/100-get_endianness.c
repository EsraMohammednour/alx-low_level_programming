#include "main.h"

/**
 * get_endianness - Function that checks the endianness
 * Return: int value
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *y = (char *)&x;

	if (*y == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
