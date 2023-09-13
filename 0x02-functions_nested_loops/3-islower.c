#include "main.h"
/**
 * _islower - Check lowercase charctor
 *
 * @c:The charactor to be checked
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
