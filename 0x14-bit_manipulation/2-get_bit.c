#include "main.h"

/**
 * get_bit - function that returns the value of a bit
 * at a given index
 * @n: variable to the integer
 * @index: index of the integer
 * Return: value of bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= 64)
		return (-1);
	if (n & mask)
		return (1);
	else
		return (0);
}
