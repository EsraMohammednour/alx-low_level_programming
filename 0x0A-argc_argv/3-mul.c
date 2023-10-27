#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry main
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int s;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	s = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", s);
	return (0);
}
