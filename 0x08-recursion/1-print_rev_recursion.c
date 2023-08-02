#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function that prints a string followed by a new line
 * @s: the pointer to the string
 * Return: 1
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_rev_recursion(s - 1);
}
