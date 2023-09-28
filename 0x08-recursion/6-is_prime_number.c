#include "main.h"

/**
 * prime1 - Calculate if it is prime or not
 * @a: variable
 * @b: Divisor
 * Return: (0)
 */

int prime1(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime1(a, b + 1));
}
/**
 * is_prime_number - checkif it is prime or not
 * @n: variabl
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (prime1(n, 2));
}
