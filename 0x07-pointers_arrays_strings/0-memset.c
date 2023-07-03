#include "main.h"

/**
 * _memset - take portion of memory and fill
 * @s: starting point of memory
 * @b: value we will put
 * @n: number of bytes we will take
 *
 * Return: changing for array with new values with n bytes
*/

char *_memset(char *S, char b, unsigned int n)
{
	int i = 0;
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);	
}
