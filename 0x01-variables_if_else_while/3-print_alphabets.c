#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C print lower and upper alphabet
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char num = 'a';
	char n = 'A';

	while (num <= 'z')
	{
		putchar(num);
		num = num + 1;
	}
	while (n <= 'Z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}


