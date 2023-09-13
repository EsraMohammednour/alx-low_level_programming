#include "main.h"
/**
 * _islower -Function to check lower case
 *
 * @C: input char
 *
 * Return: 1 if it si lowercase else 0 (Success)
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
