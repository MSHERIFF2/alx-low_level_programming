#include "main.h"

/**
 * print_binary - function that prints the
 * binary representation of a number
 * @n: variable to the binary
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int num_bits = sizeof(unsigned long int) * 8;
	int i;

	for (i = num_bits - 1; i >= 0; i--)
	{
		unsigned long int mask = 1UL << i;

		if (n & mask)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}
