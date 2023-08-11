#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: index 0
 * @max: last index '\0'
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;

	if (min > max)
		return (NULL);
	ptr = malloc(min + max);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
