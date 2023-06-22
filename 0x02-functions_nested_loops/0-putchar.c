#include "main.h"

/**
 * main - Entry point
 *
 * Description: display _putchar with putchar prototype 
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";
	int cha;

	for (cha = 0; cha < 8; cha++)
		_putchar(str[cha]);
	_putchar('\n');

	return (0);
}
