#include "main.h"
/**
 * _isalpha - Check alphabet charctor
 *
 * @c:The charactor to be checked
 *
 * Return: 1 if it check alphabet else 0 (Success)
*/

int _isalpha(int c)
{
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
        else
        return (0);
}
