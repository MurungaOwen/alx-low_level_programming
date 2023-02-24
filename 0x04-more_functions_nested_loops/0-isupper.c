#include "main.h"
/**
 * _isupper-a function that checks for upper case letters
 * Return: 1 if upper 0 othrerwise
 * @c:ASCII code
 */
int _isupper(int c)
{
	if (c >= 65 &&  c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
