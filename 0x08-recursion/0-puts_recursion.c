#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function that prints a string followed by a new line
 * @s: the pointer to the string
 * Return: 1
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		puts(_puts_recursion(s));
	}
}
