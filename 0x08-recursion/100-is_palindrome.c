#include "main.h"

/**
 * l_i - returns the last index
 * @s: variable pointer
 * Return: int
 */

int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);
int l_i(char *s)
{
	int b = 0;

	if (*s > '\0')
		b += l_i(s + 1) + 1;
	return (b);
}

/**
 * is_palindrome - Fuction to check if it is palindrome
 * @s: pointer
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int end = l_i(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * check - function to check palindrome
 * @s: variable pointer
 * @start: from the left
 * @end: from the right
 * @mod: int
 * Return:0 or 1
 */

int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}
