#include "main.h"

/**
 * _puts - print a text to stdout
 *
 * @str: store the length of string
 * Return: return the length
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
