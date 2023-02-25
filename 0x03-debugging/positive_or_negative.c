#include "main.h"
/**
 * positive_or_negative-value of a number
 * @i:given integer
 * Return:always 0
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d id negative\n", i);
	else
		printf("%d is zero\n", i);
}

