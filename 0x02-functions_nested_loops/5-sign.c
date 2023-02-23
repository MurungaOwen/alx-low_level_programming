#include "main.h"
/**
 * print_sign-funcytion that prints the sign ofa nyumber
 *@n:number integer
 *Return:1 is greater than zoro 0 if zero and -1 if negative
*/
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
