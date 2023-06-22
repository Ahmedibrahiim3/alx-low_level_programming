#include "main.h"

/**
 * ptint_sign - print + if it above zero.
 *               print - if it lower zero
 *               print 0 if it is zero.
 * @n: take input
 *
 * Return: 1 if +, -1 if -, 0 if 0
*/

int ptint_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
