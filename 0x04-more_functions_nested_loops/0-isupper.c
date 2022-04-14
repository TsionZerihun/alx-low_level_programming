#include <stdio.h>
/**
 * _isupper - checks for upper and lowercase letters
 *@c: takes in a character
 * Return: 0 if upper 1, 1 if lower
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
