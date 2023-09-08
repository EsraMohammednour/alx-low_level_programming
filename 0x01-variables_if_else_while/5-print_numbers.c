#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C print from 0 to 9
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num = num + 1;
	}
	putchar('\n');
	return (0);
}


