#include "main.h"

/**
 * binary_to_uint - function that convert binary to decimal
 * @b: pointer to the binary character
 *
 * Return: decimal value
 */
unsigned int binary_to_uint(const char *b)
{
	int i, decimal, length;

	decimal = 0;
	length = strlen(b);

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; i < length; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	for (i = 0; i < length; i++)
	{
		decimal = decimal * 2 + (b[i] - '0');
	}
	return (decimal);
}
