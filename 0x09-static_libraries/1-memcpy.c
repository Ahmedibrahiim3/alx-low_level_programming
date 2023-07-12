#include "main.h"
/**
 * _memcpy - function copies area from memory
 * @dest: location in memory stored
 * @src: the memory where copy happens
 * @n: number of bytes
 *
 * Return: copied memory with peice changed
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;
	int r = 0;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
