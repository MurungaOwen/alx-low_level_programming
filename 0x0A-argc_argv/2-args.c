#include<stdio.h>
/**
 * main-function to list all arg
 * @argc:argment
 * @argv:argument array
 * Return:0 success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}
	return (0);
}
