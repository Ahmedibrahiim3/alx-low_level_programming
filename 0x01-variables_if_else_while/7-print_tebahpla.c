#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: program that prints the lowercase alphabet in reverse.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char lower_alp = 'z';

	while (lower_alp >= 'a')
	{
		putchar(lower_alp);
		lower_alp--;
	}
	putchar('\n');
	return (0);
}
