#include "main.h"

/**
 * _isalpha - check if char both lower and upper
 *
 * @c: takes input
 *
 * Return: 1 selected
 *         0 notselected
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
