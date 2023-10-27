#include "main.h"

/**
 * _isdigit - Function to check from 0 to 9
 *
 * @c: takes integer to check
 *
 * Return: 1 if c digit otherwise 0 (Success)
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}
