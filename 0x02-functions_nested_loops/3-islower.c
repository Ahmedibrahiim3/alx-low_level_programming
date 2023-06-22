#include "main.h"

/**
 * _islower - check if it is a lowercae
 *
 * @c: check input
 *
 * Return: 1 if it is lowercase
 *         0 Always(Success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
