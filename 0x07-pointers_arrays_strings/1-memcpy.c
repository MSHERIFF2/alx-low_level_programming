#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: destionation pointer
 * @src: source pointer
 * @n: number of iteration
 * Return: 1
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *final_dest = &dest;
	char *source = &src;
	int i;

	for (i = 0; i < n; i++)
	{
		final_dest[i] = source[i];
	}
	return (final_dest);
}
