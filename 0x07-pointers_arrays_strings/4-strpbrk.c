#include "main.h"

/**
 * _strbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
*/
char *_strbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
			return (s);
		}
	s++;
	}
	return ('\0');
}
