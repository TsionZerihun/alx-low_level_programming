#include <unistd.h>
/**
 * _putchar - writes the char c to stdout
 * @c: the character to print
 *
 * Return: 0 on sucess.
 * on error, -1 is returned, and errno is set approprietly.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
