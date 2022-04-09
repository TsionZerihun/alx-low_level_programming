#include <stdio.h>

/**
 * main - entry point
 *
 * Description: number one to ten without using variable char
 * Return: 0
 */
int main(void)
{
int i;

for (i = 0; i <= 9; ++i)
putchar('0' + i);

putchar('\n');

return (0);
}
