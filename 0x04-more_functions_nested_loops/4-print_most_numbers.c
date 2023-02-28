#include "main.h"
/**
 * print_most_numbers-a function that prints numbers except 2 and 4
 * Return:no return value
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a == 50 || a ==52)
		{
			continue;
		}
		_putchar(a);
	}
	_putchar('\n');
}
