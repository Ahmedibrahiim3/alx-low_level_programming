#include "main.h"

/**
 * *_strdup - function returns a pointer to a new string which is a duplicate
 * @str: string
 * Return: 0 on success
*/

char *_strdup(char *str)
{
	char *a;
	int i = 0;
	int r = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;

	a = malloc(sizeof(char) * (i + 1));

	if (a == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		a[r] = str[r];
	return (a);
}
