#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of
 * chars, and initializes it with a specific
 * char
 * @size: size of the array
 * @c: the character to be fill in the array
 *
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	unsigned int j;

	for (j = 0; j < size; j++)
	{
		array[j] = c;
	}
	return (array);
}
