#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main entry point
 *
 * Description: print a number, its last digit, and wheather its negative, positive or zero
 * Return:0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("Last dogot of %d is %d %s\n", n, n % 10,
((n % 10) == 0) ? "and is zero"
: (((n % 10) > 5) ? "and is greater than 5"
: "and is less than 6 and one 0"));

return (0);
}
