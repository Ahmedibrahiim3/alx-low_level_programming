#include "main.h"

/**
 * _abs - Entry point
 * @n: input to check and return
 * Return: Always 0 (success)
*/

int _abs(int n)

{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
