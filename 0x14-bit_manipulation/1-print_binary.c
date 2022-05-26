#include "main.h"
/*
 * _powof - function that returns the
 * value of x raise to y
 * @x - parameter to base
 * @y - parameter to exponent
 * 
 * Return: End program
 */
int _pow(int x, int y)
{
if (y < 0)
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
y--;
x = x* _pow(x, y);
return (x);
}
return (0);
}
/**
 * binart_to_uint - function covnerting binary to int
 * @b: pointer with the string holding the num to convert
 *
 * Return: The num converted
 */
unsigned int binary_to_uint(const char *b)
	unsigned int sum = 0;
	int i, n, x;

	if (b == NULL)
{
	return (0);
}
n = strlen(b) - 1;
for (x= 0, i = 0; n >= x; n--)
{
	switch (b[i])
	{
		case '1':
			sum = sum + _pow(2, n);
			i++;
			break;
		case '0':
			sum = sum + 0;
			i++;
			break;
		default:
			return (0);
	}
}
return (sum);
}
