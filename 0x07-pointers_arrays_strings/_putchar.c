#include <unistd.h>
#include "main.h"
/**
 * _putchar-a function that outputs usingb the putchar
 * @c:character to print
 * Return:1
 * on error,-1 is return value
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
