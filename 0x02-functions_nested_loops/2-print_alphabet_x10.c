#include "main.h"
/**
 *print_alphabet_x10-entry point
 *Return:always 0
*/
void print_alphabet_x10(void)
{
	int i;
	int j;

	for(i = 0; i < 10; i++)
	{
		for(i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		putchar('\n');
	}
}
