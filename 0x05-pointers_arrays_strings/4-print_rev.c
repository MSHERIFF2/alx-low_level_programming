#include "main.h"

/**
 * print_rev - print a text to stdout in reverse order
 *
 * @s: store the length of string
 * Return: 0
 */

void print_rev(char *s)
{
	int i;
	int j;
	int len;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
