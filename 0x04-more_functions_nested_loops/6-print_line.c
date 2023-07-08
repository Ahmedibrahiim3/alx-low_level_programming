#include "main.h"

/**
 * print_line - Entry point
 * @n: number of times
 * Return: for no number \n number of _ witt \n at the end
*/

void print_line(int n)
{
	int no_of_n;

	if (n <= 0)
		_putchar ('\n');
	else
	{
		for (no_of_n = 1; no_of_n <= n; no_of_n++)
			_putchar ('_');
		_putchar ('\n');
	}
}
