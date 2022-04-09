#include <stdio.h>

/**
 * ain -entry point
 *
 * Description: print backwards and lower case alphabets
 * Return: 0
 */
int main(void)
{
char c;

for (c = 'z'; c >= 'a'; --c)
putchar(c);

putchar('\n');

return (0);
