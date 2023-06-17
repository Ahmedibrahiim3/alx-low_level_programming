#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints the alphabet in lowercase, uppercase.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char small = 'a';
	char capital = 'A';

	while (small <= z)
	{
		putchar(small);
		small++;
	}

	while (capital <= 'Z')
	{
		putchar(capital);
		capital++;
	}
	putchar('\n');
	return (0);
}
