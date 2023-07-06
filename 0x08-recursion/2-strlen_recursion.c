#include "main.h"

/**
 * _strlen_recursion - Display length of string
 * @s: string to have its length
 * Return: Always 0 (success)
*/
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
