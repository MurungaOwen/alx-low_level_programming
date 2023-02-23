#include "main.h"
/**
 * print_to_98-prints all numbers upto 98
 * Return:no value
 * @n-users range from
 */
void print_to_98(int n)
{
	int k;
	for(k = n; k <= 98; k++)
	{
		_putchar(k + 48);
		if (k == 98)
			break;
		_putchar(',');
		_putchar(' ');
	}
}
