#include "main.h"

/**
 * _abs - Entry point
 * @x: input to check and return
 * Return: Always 0 (success)
*/

int _abs(int x);

{
	if (x >= 0)
		return (1);
	else if (x < 0)
		_abs(x);
		return (1);
	else
		return (0);
}
