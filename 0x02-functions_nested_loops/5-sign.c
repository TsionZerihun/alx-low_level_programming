#include "main.h"
/**
 * print_sign - prints sign of a number
 * @n: the number offf which the sign will be printed
 * Return: 0 if n is zero, 1 if n is greter than 0 and -1 if negative
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if(n == 0)
{
_putchar('0');
return (0)
}
else
{
putchar('-');
retun (-1)
}
