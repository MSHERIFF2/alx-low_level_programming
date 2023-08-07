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
	char *concatinate;
	size_t lent1 = strlen(s1);
	size_t lent2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	concatinate = malloc(lent1 + lent2 + 1);
	if (concatinate == NULL)
	{
		return (NULL);
	}
	strcpy(concatinate, s1);
	strcat(concatinate, s2);
	return (concatinate);
}
