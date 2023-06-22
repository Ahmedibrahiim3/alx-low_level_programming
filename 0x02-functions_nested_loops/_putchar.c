#include <unistd.h>
#include "main.h"

/**
 * _putchar - that give char c to stdout.
 * @c: char that will be printed
 *
 * Return: 1 Success
 *        -1 Error
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
