#include "main.h"
/**
 * _abs(int)-function that computes the absolute value of an integer
 * Return:absolute value
 *@i:the number to be tested
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
