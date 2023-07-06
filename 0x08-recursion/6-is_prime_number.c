#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check number to be prime
 * @n: int to be evaluated
 * @start: to be the start
 * Return: 1 if it is a prime 0 if not
*/

int evaluate(int n, int start);
int is_prime_number(int n)
{
	return (evaluate(n, 2));
}

/**
 * evaluate - evaluate if number less than n and can be divided
 * @n: int to be evaluated
 * @start: to be start with
 * Return: int
*/

int evaluate(int n, int start);
{
	if (start >= n && n > 1)
		return (1);
	else if (n % start == 0 || n <= 1)
		return (0);
	else
		return (evaluate(n, start + 1));
}
