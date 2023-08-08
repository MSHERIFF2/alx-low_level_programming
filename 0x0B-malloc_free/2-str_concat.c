#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: concatinated string
 */
char *str_concat(char *s1, char *s2)
{
	int a, b;
	char *c;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	for (b = 0; s2[b] != '0\'; b++)
	{
	}
	c = (char *)malloc(((a + b) + 1) * sizeof(char));
	if (c == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		c[a] = s1[a];
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
		c[a] = s2[b];
		a++;
	}
	return (c);
}
