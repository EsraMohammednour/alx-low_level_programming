#include "main.h"

/**
 * sqrt1 - returns square root of a number
 * @a: variaible
 * @b: variable 2
 * Return: square root or (-1)
 */

int sqrt1(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt1(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: Variable
 *
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	return (sqrt1(n, 0));
}
