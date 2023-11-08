#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: variable 1
 * @(*f): pointer to function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
