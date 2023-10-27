#include "main.h"

/**
 * _isupper - Function to check upper charactor
 *
 * @c: takes charactor to check
 *
 * Return: 1 if c uppercase otherwise 0 (Success)
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}
