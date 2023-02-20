#include<stdio.h>
/**
 * main -a function that prints the size of various integers
 * Return:0 (success)
 */
int main(void)
{
int a;
char b;
long int c;
long long int d;
float e;
printf("size of a char: %lu byte(s)", (unsigned long)sizeof(a));
printf("size of an int: %lu byte(s)", (unsigned long)sizeof(b));
printf("size of a long int: %lu byte(s)", (unsigned long)sizeof(c));
printf("size of a long long int: %lu byte(s)", (unsigned long)sizeof(d));
printf("size of a float: %lu byte(s)", (unsigned long)sizeof(e));
return (0);
}
