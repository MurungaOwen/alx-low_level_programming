#include<stdio.h>
#include "main.h"
/**
 * print_to_98-prints all numbers upto 98
 * Return:no value
 * @n:users range from
 */
void print_to_98(int n)
{
	int i, k;

	if (i <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	}
	else if (k >= 98)
	{
		for (k = n; k >= 98; k--)
		{
			if (k != 98)
				printf("%d, ", k);
			else if (k == 98)
				printf("%d\n", k);
		}
	{	
}
