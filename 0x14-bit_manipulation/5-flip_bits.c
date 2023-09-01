#include "main.h"

/**
 * flip_bits - function that returns the numbers of bits 
 * you would need to flip to get from one number to another
 * @n: place holder for the integer
 * @m: place hoder for the second integer
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor > 0)
	{
		count += xor & 1;
		xor >>= 1;
	}
	return (count);
}