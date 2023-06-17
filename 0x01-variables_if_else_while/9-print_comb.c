#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints all possible combinations of digit numbers.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int number = 0;

	while (number <= 0)
	{
		putchar(number + 48);

		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');
	return (0);
}
