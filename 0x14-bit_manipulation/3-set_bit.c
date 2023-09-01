#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1
 * at a given index
 * @n: pointer to the integer
 * @index: index of the integer
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= 64)
		return (-1);
	if (n & mask)
	{
		_putchar(1);
		return (1);
	}
	else
		return (0);
}
