#include<stdio.h>
#include "main.h"
/**
 * print_to_98-prints all numbers upto 98
 * Return:no value
 * @n:users range from
 */
void print_to_98(int n)
{
	int i;
	for (i = n; i <= 98; i++)
	{
		if(i == 98)
			printf("%d", i);
		printf("%d", i);
	}	
}
