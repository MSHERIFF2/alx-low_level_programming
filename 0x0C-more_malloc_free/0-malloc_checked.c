#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: place holder for the variable
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		_putchar('malloc_checked');
		exit(98);
	}
	return (ptr);
}
