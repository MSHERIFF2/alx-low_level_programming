#include "main.h"

/**
 * _strlen - printout the length of a string
 *
 * @s : the pointer for the string
 * Return : i
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

