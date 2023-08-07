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
	unsigned int i;
	char *array;

	i = 0;
	if (size == i)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
