#include "main.h"
/**
 * more_numbers-a function to print the numbers one to 14 ten times
 * Return:no return value
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b > 9)
			{
				_putchar('1');
			}
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
