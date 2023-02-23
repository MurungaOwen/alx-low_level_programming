#include "main.h"
/**
 * print_last_digit-a program that prints last digit of a number
 *@i:number we wanrt to check its absolute value
 *Return:last digit
 */
int print_last_digit(int i)
{
	int l;

	l = i % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
