#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C print_alphabet inverse
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char num = 'z';

	while (num >= 'a')
	{
		putchar(num);
		num = num - 1;
	}
	putchar('\n');
	return (0);
}


