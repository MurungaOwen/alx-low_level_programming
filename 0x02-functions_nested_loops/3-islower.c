#include "main.h"
/**
 * _islower-function that checks for lowercase letters
 * Return:1 for lowercase the rest are zero
 *@c:character in ascii code
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
