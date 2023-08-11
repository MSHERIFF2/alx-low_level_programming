#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: place holder for the variable
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(sizeof(unsigned int) * b);
	if (ptr == NULL)
	{
		_putchar('98');
		exit(3);
	}
}
