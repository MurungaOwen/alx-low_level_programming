#include "main.h"
/**
 * print_to_98-prints all numbers upto 98
 * Return:no value
 * @n-users range from
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar(n);
		if (n == 98)
			break;
		_putchar(',');
		_putchar(' ');
	}
}
