#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C print hexadecimal
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char num = 0;
	char n = 'a';

	while (num <= 9)
	{
		putchar(num + '0');
		num = num + 1;
	}
	while (n <= 'f')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}


