#include<stdio.h>

/**
 * main - entry point
 *
 * Description: print all sing;e digit combination
 * Return: 0
 */
int main(void)
{
int c = 0;

while (c < 10)
{
putchar(48 + c);
if (c != 9)
{
putchar(',');
putchar(' ');
}
c++;
}
putchar('\n');
return(0);
}
