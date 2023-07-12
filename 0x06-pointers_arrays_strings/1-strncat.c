#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of byte from source
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int s, i;

	s = 0;
	while (dest[s])
		s++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[s + i] = src[i];
	dest[s + i] = '\0';
	return (dest);
}
