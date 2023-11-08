#ifndef FUNCTION_POINTERS.H
#define FUNCTION_POINTERS.H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
int _putchar(char c);

#endif
