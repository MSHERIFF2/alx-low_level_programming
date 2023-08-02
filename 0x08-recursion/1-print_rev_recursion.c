#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - function that prints a string followed by a new line
 * @s: the pointer to the string
 * Return:0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
