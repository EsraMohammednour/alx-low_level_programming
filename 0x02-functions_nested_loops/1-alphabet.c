#include "main.h"
/**
 * main - Entry point
 *
 * Description: A C program to write a function to print_alphabet 
 *
 * Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
	_putchar(i);
	i++;
	}
	_putchar('\n');
}

