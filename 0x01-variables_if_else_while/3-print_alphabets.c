#include <stdio.h>
/**
 * main - a function that printss out alphabets in caps and small letters
 * Return: 0(Success)
 */
int main(void)
{
	int A = 65;
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	while (A <= 90)
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
