#include <stdio.h>
/**
 * main -entry point,a program that prints alphabets
 * Return: 0(Success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++
	}
	putchar("\n");
	return (0);
}
