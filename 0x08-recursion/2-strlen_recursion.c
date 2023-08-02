#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - function that returns the lenght of a string
 * @s: the pointer to the string
 * Return:0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
