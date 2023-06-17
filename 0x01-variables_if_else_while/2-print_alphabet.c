#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:  a program that prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char az = 'c';

	while (az <= 'z')
	{
		putchar(az);
		az++;
	}
	putchar('\n');
	return (0);
}
