#include "main.h"

/**
 * _strchr - function searches for first occ of part invoked
 * @s: part invoked
 * @c: replaced part
 *
 * Return: 0 (success)
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
