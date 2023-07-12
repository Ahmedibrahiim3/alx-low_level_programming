#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert string to int
 * @s: string
 * Return: intgee*/

int _atoi(char *s)
{
	int i = 0;
	int d = 0;
	int n = 0;
	int len = 0;
	int f = 0;
	int digit = 0;

	while(s[len] != '\0')
		len++;
	while(i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '0')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '0')

				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}

/**
 * main - prints arguments passed
 * @argc: int
 * @argv: array
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int total;

	if (argc == 3)
	{
		total = _atoi(argv[1]) * _atoi(argv[2]);
		printf("%d\n", total);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
