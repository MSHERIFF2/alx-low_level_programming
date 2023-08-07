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

	concatinate = malloc(strcat(s1, s2));
	if (concatinate = NULL)
	{
		return (" ");
	}
	if (concatinate < NULL)
	{
		return (NULL);
	}
	return (concatinate);
}
