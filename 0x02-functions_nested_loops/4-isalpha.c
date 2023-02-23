#include "main.h"
/**
 * _isalpha-a function that checks for alphabetic chars
 *@c:ASCII code
 *Return:1 for alphabetic chars and 0 otherwise
 */
int _isalpha(int c)
{
	if (i >= 65 && i <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
