#include <stdio.h>

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
