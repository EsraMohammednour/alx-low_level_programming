#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C print_alphabet
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char num = 'a';

	while (num <= 'z')
	{
		if (num != 'e' && num != 'q')
		putchar(num);
		num = num + 1;
	}
	putchar('\n');
	return (0);
}


