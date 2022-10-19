#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character to standard output
 * @c: the character to print
 *
 * Return on sucess 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
