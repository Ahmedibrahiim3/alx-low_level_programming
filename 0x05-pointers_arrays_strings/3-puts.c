#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line
 * @str: string to be printed
 * Return: string followed by new line
*/

void _puts(char *str)

{
	while (*str != '\0')
	{
		_puts(*str);
		str++;
	}
	_puts('\n');
}
