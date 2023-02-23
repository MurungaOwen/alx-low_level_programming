#include "main.h"
/**
 *times_table-prints the timestable of
 *Return:no return
*/
void times_table(void)
{
	int i, j, k;

	k = i * j;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(k + 48);
		}
	}
}
