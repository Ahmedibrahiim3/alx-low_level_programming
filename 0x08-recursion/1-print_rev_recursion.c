#include "main.h"

/**
 * _print_rev_recursion - Display string in reverse
 * @s: points to string
 * Return: Always 0 (success)
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_prin_rev_recursion(s + 1);
		_putchar(*s);
	}
}
