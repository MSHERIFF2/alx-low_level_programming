#include "main.h"

/**
 * print_binary - function that present the binary representation of a number
 * @n: variable for the numbers
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else if (n == '1')
	{
		_putchar ('1');
	}
	else if (n / 2 == 0)
	{
		_putchar('0');
	}
	else
	{
		_putchar('1');
	}
}
