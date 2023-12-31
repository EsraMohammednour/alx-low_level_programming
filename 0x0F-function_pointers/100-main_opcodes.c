#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: int var
 * @argv: array
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n, i;
	char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	p = (char *)main;
	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", p[i]);
		if (i < (n - 1))
		printf(" ");
	}
	printf("\n");
	return (0);
}
