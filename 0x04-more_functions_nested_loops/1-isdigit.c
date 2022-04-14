#include <stdio.h>
/**
 * _isdigit - checks if its digit from 0 to 9
 * @c: takes in a digit
 * Return: 1 if its a digit, 0 otherwise
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
