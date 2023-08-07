#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a
 * newly allocated space in memory
 * @str: pointer to the string
 *
 * Return: a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *allocate;

	if (str == NULL)
	{
		return (NULL);
	}
	allocate = malloc(sizeof(str));
	return (allocate);
	if (str > allocate)
	{
		return (NULL);
	}
	return (0);
}

