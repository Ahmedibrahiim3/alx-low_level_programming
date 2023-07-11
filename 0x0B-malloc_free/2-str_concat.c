#include "main.h"

/**
 * str_concat - Function that concatenate two strings
 * @s1: string
 * @s2: string
 * Return: string concatenated
*/

char *str_concat(char *s1, char *s2)
{
	char *conect;
	int i;
	int c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = c = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[c] != '\0')
		c++;
	conect = malloc(sizeof(char) * (i + c + 1));

	if (conect == NULL)
		return (NULL);
	i = c = 0;
	while (s1[i] != '\0')
	{
		conect[i] = s1[i];
		i++;
	}

	while (s2[c] != '\0')
	{
		conect[i] = s2[c];
		i++, c++;
	}
	conect[i] = '\0';
	return (conect);
}
