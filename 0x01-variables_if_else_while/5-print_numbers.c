#include<stdio.h>

/**
 * main - Entry point
 *
 * Description:  program that prints all single digit numbers of base ten.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int no = 0;

	while (no < 10)
	{
		putchar(no + '0');
		no++;
	}
	putchar('\n');
	return (0);
}
