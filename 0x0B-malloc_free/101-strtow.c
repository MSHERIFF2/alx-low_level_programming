#include "main.h"
#include <stddef.h>

/**
 * strtow - function that splits a string into words
 * @str: pointer to the string
 * Return: pointer to an array
 */
char **strtow(char *str)
{
	int j;

	if (str == NULL || str == "")
	{
		return (NULL);
	}
	for (j = 0; j < str; j++)
	{
		str[j] + 1;
		_putchar(str);
	}
	return (str);
}
