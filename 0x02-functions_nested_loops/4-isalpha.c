#include "main.h"
/**
 * _isalpha - checks for alphabetic charater
 * @c: takes in a character
 * Return: 1 if c is a lower or uppercase letter.0 if c is not a letter
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
