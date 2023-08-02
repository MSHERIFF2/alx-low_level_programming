#include "main.h"

/**
 * _memcpy - function that copies memory area
<<<<<<< HEAD
 * @dest: pointer
 * @src: source pointer
 * @n: size 
=======
 * @dest: destionation pointer
 * @src: source pointer
 * @n: number of iteration
>>>>>>> 9b409191fd89333b5f654f7660d40523c2ac746a
 * Return: 1
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
<<<<<<< HEAD
	int i;
	char *final_dest = 
	for (i = 0; i < n; i++)
	{

=======
	char *final_dest = dest;
	char *source = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		final_dest[i] = source[i];
	}
	return (final_dest);
}
>>>>>>> 9b409191fd89333b5f654f7660d40523c2ac746a
