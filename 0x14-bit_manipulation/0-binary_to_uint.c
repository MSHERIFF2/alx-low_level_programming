#include "main.h"

/**
 * binary_to_uint - function that converts a binary
 * number to an unsigned int
 * @b: pointer to the string
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (*b == 0)
		return (0);
	if (*b != '0' && *b != '1')
		return (0);
	while (*b != '\0')
	{
		result = result * 2 + (*b - '0');
		b++;
	}
	return (result);
}

