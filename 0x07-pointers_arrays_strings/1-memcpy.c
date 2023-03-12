#include "main.h"
/**
 * _memcpy-a functio to copy mem address
 *@dest:from
 *@src:to
 *
 * @n:number of bytes
 * Return:copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int r = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
