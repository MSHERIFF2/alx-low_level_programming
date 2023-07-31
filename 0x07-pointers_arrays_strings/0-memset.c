#include "main.h"

/**
 * _memset - using memset function
 * @s: pointer
 * @b: place holder
 * @n: number of iteration
 * Return: 1
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
