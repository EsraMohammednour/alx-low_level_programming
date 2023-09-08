#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: A C program to display last digit
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	 d = (n % 10);

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, d);
	else if (n == 0)
		printf("Last digit of %i is %i and is 0\n", n, d);
	else if (d < 6 && d != 0)
		printf("Last digit of %i is %i  and is less than 6 and not 0\n", n, d);
	return (0);
}
