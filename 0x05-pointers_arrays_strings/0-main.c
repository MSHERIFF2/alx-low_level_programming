#include "main.h"
#include <stdio.h>

/**
 * main - reset pinter value
 *
 * Return: 0
 */

int main(void)
{
	int m = 98;

	_putchar('(char *)m');
	reset_to_98(&m);
	_putchar('(char *)m');
	return (0);
}
