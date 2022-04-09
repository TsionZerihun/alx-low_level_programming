#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print all songle digit numbers from zero to nine
 * Return: 0
 */
int main(void)
{
char i;

for(i = '0'; i <= '9'; ++i)
putchar(i);

putchar('\n');

return(0);
}
