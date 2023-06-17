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
	char sm = 'a';
	char cap = 'A';

	while (sm <= z)
	{
		putchar(sm);
		sm++;
	}

	while (cap <= 'Z')
	{
		putchar(cap);
		cap++;
	}
	putchar('\n');
	return (0);
}
