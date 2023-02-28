#include "main.h"
/**
 * print_line-function to print a straight line in the terminal
 * Return: no return value
 * @n:number of times to draw the line on termial
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
