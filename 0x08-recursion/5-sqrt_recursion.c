#include "main.h"


/**
 * _sqrt_recursion - return real square root
 * real_sqrt - return real square root
 * @n: number to find its sqrt
 * @i: square root
 * Return: intger
*/

int real_sqrt(int n, int i);
int _sqrt_recursion(int n)
{
	return (real_sqrt(n, 1));
}

/**
 * real_sqrt - return real square root
 * _sqrt_recursion - return real square root
 * @n: number to find its sqrt
 * @i: square root
 * Return: intger
*/

int real_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n)
	{
		return (real_sqrt(n, i + 1));
	}
	else
}		return (-1);
